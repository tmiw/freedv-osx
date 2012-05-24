/*---------------------------------------------------------------------------*\
                                                                             
  FILE........: codec2-dll.cpp
  AUTHOR......: David Witten  
  DATE CREATED: 21 May 2011                                                     
                                                                             
  Wrapper for the Codec2 codec and fdmdv modem APIs.

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

#include "stdafx.h"
#include "codec2-dll.h"


// This is an example of an exported variable
WIN32PROJECT_API int nwin32project=0;

// This is an example of an exported function.
WIN32PROJECT_API int fnwin32project(void)
{
    return 42;
}

// This is the constructor of a class that has been exported.
// see win32-project.h for the class definition
Cwin32project::Cwin32project()
{
    return;
}
