/*---------------------------------------------------------------------------*\
                                                                             
  FILE........: codec2-dll.h
  AUTHOR......: David Witten  
  DATE CREATED: 21 May 2011                                                     
                                                                             
  Wrapper header for the Codec2 codec and fdmdv modem APIs.

\*---------------------------------------------------------------------------*/

/*
  All rights reserved.

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU Lesser General Public License version 2.1, as
  published by the Free Software Foundation.  This program is
  distributed in the hope that it will be useful, but WITHOUT ANY
  WARRANTY; without even the implied warranty of MERCHANTABILITY or
  FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public
  License for more details.

  You should have received a copy of the GNU Lesser General Public License
  along with this program; if not, see <http://www.gnu.org/licenses/>.
*/
// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the WIN32PROJECT_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// WIN32PROJECT_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef WIN32PROJECT_EXPORTS
#define WIN32PROJECT_API __declspec(dllexport)
#else
#define WIN32PROJECT_API __declspec(dllimport)
#endif

// This class is exported from the win32-project.dll
class WIN32PROJECT_API Cwin32project {
public:
    Cwin32project(void);
    // TODO: add your methods here.
};

extern WIN32PROJECT_API int nwin32project;

WIN32PROJECT_API int fnwin32project(void);
