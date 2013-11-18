//==========================================================================
// Name:            serialport.h
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

#ifndef SERIAL_PORT_H
#define SERIAL_PORT_H

#ifdef WIN32
#include <windows.h>
#endif // WIN32

#include <string>

enum SerialPortParity
{
    NONE,
    EVEN,
    ODD
};

// Quick and dirty serial port class that supports the minimum necessary to
// do PTT (for now). Can be extended later (send/receive data for CAT control, 
// for example).
class SerialPort
{
public:
    // portName is a path to the serial port, in one of the following formats:
    // OSX: /dev/tty.*
    // Linux: /dev/ttyS*
    // Windows: COM*:
    SerialPort(const std::string &portName);
    virtual ~SerialPort();
    
    bool getRTS() const;
    void setRTS(const bool newRTS);
    
    bool getDTR() const;
    void setDTR(const bool newDTR);
    
    int open();
    int close();
    
    bool isOpen() const;
    
private:
    const std::string _portName;
    
#ifdef WIN32
    HANDLE _fileDescriptor;
    
    bool _rtsEnabled;
    bool _dtrEnabled;
#else
    int _fileDescriptor;
#endif // WIN32
        
    // Object should not be copied since there can be only one handle open
    // per serial port. An attempt to use the copy constructor here, even
    // implicitly, will result in a compile error due to the declaration below.
    SerialPort(const SerialPort&);
};

#endif // SERIAL_PORT_H