//==========================================================================
// Name:            serialport.cpp
//
// Purpose:         Serial port management.
// Created:         Dec. 28, 2012
// Authors:         Mooneer Salem
// 
// License:
//
//  This program is free software; you can redistribute it and/or modify
//  it under the terms of the GNU General License version 2.1,
//  as published by the Free Software Foundation.  This program is
//  distributed in the hope that it will be useful, but WITHOUT ANY
//  WARRANTY; without even the implied warranty of MERCHANTABILITY or
//  FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public
//  License for more details.
//
//  You should have received a copy of the GNU General License
//  along with this program; if not, see <http://www.gnu.org/licenses/>.
//
//==========================================================================

#ifndef WIN32
#include <fcntl.h>
#include <termios.h>
#include <unistd.h>
#include <sys/ioctl.h>
#endif // !WIN32

#include "serialport.h"

#define ERROR_CONDITION (-1)
#ifdef WIN32
#define INVALID_FILE_DESCRIPTOR (INVALID_HANDLE_VALUE)
#else
#define INVALID_FILE_DESCRIPTOR (-1)
#endif // WIN32

SerialPort::SerialPort(const std::string &portName)
    : _portName(portName)
    , _fileDescriptor(INVALID_FILE_DESCRIPTOR)
#ifdef WIN32
    , _rtsEnabled(false)
    , _dtrEnabled(false)
#endif // WIN32
{
    // No action here until open() is called.
}

SerialPort::~SerialPort()
{
    // Close serial port if needed.
    if (isOpen())
    {
        close();
    }
}

#ifndef WIN32
static int posixGetModemControlBits(const int fileDescriptor)
{
    int modemControlBits = 0;
    
    if (ioctl(fileDescriptor, TIOCMGET, &modemControlBits) == 0)
    {
        return modemControlBits;
    }
    else
    {
        return ERROR_CONDITION;
    }
}
#endif // !WIN32

bool SerialPort::getRTS() const
{
#ifdef WIN32
    // No way to get DTR/RTS directly from Windows, so we have to
    // grab what the caller put in during a previous set*() call.
    return _rtsEnabled;
#else
    int tmpbits = posixGetModemControlBits(_fileDescriptor);
    if (tmpbits != ERROR_CONDITION)
    {
        return tmpbits & TIOCM_RTS;
    }
    else
    {
        return ERROR_CONDITION;
    }
#endif // WIN32
}

void SerialPort::setRTS(const bool newRTS)
{
#ifdef WIN32
    if (newRTS)
    {
        EscapeCommFunction(_fileDescriptor, SETRTS);
    }
    else
    {
        EscapeCommFunction(_fileDescriptor, CLRRTS);
    }
    _rtsEnabled = newRTS;
#else
    int flags = TIOCM_RTS;
    ioctl(_fileDescriptor, newRTS ? TIOCMBIS : TIOCMBIC, &flags);
#endif // WIN32
}
    
bool SerialPort::getDTR() const
{
#ifdef WIN32
    // No way to get DTR/RTS directly from Windows, so we have to
    // grab what the caller put in during a previous set*() call.
    return _dtrEnabled;
#else
    int tmpbits = posixGetModemControlBits(_fileDescriptor);
    if (tmpbits != ERROR_CONDITION)
    {
        return tmpbits & TIOCM_DTR;
    }
    else
    {
        return ERROR_CONDITION;
    }
#endif // WIN32
}

void SerialPort::setDTR(const bool newDTR)
{
#ifdef WIN32
    if (newDTR)
    {
        EscapeCommFunction(_fileDescriptor, SETDTR);
    }
    else
    {
        EscapeCommFunction(_fileDescriptor, CLRDTR);
    }
    _dtrEnabled = newDTR;
#else
    int flags = TIOCM_DTR;
    ioctl(_fileDescriptor, newDTR ? TIOCMBIS : TIOCMBIC, &flags);
#endif // WIN32
}
    
int SerialPort::open()
{
#ifdef WIN32
    TCHAR portName[32];
    _stprintf_s(portName, sizeof(portName)/sizeof(TCHAR), _T("\\\\.\\%s"), _portName.c_str());
    
    _fileDescriptor = CreateFile(
        portName, 
        GENERIC_READ | GENERIC_WRITE,
        0, 
        0, 
        OPEN_EXISTING, 
        FILE_FLAG_OVERLAPPED, 
        0);
#else
    _fileDescriptor = ::open(_portName.c_str(), O_RDWR | O_NOCTTY | O_NDELAY);
#endif // WIN32

    return (int)_fileDescriptor;
}

int SerialPort::close()
{
#ifdef WIN32
    int rv = CloseHandle(_fileDescriptor);
#else
    int rv = ::close(_fileDescriptor);
#endif // WIN32

    _fileDescriptor = INVALID_FILE_DESCRIPTOR;
    return rv;
}
    
bool SerialPort::isOpen() const
{
    return _fileDescriptor != INVALID_FILE_DESCRIPTOR;
}