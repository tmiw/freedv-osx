What is it?
===========

This ZIP archive contains a build of Hamlib-1.2.15.1
cross-compiled for Win32 using MinGW under Xubuntu Linux 10.10 (nice, heh!).

The DLL has a cdecl interface for MS VC++.

This software is copyrighted. The library license is LGPL, and the *.EXE
files licenses are GPL.  Hamlib comes WITHOUT ANY WARRANTY. See the
LICENSE.txt, COPYING.txt, and COPYING.LIB.txt files.


Installation and Configuration
==============================

Extract the ZIP archive into a convenient location, C:\Program Files is a
reasonable choice.

Make sure *all* the .DLL files are in your PATH (leave them in the bin
directory and set the PATH).  To set the PATH environment variable in
Windows 2000 and Windows XP (need info on Vista and Win 7) do the following:

 * Right-click on "My Computer"
 * Select "Properties" from the pop-up menu
 * Click the "Advanced" tab of the "System Properties" dialog
 * Click the "Environment Variables" button
 * Select "Path" in the "System variables" box of the "Environment Variables"
   dialog
 * Click the Edit button
 * Now add the Hamlib path in the "Variable Value:" edit box.  Be sure to put
   a semi-colon ';' after the last path before adding the Hamlib path (NB. The
   entire path is highlighted and will be erased upon typing a character so
   click in the box to unselect the text first.  The PATH is important!!)
   Append the Hamlib path, e.g. C:\Program Files\hamlib-win32-1.2.14~git\bin
 * Click OK for all three dialog boxes to save your changes.


Testing with the Hamlib Utilities
=================================

To continue, be sure you have read the README.betatester file, especially
the "Testing Hamlib" section.  The primary means of testing is by way of the
rigctl utility for radios and rotctl utility for rotators.  Each is a command
line program that is interactive or can act on a single command and exit.

Documentation for each utility can be found as a PDF in the pdf/ directory.

In short, the command syntax is of the form:

  rigctl -m 120 -r COM1 -vvvvv

  -m -> Radio model 120, or Yaesu FT-817 (use -l for a list)
  -r -> Radio device, in this case COM1
  -v -> Verbosity level.  For testing four or five v characters are required.
        Five v's set a debug level of TRACE which generates a lot of screen
        output showing communication to the radio and values of important
        variables.  These traces are vital information for Hamlib rig backend
        development.

To run rigctl or rotctl open a cmd window (Start|Run|enter 'cmd' in the dialog).
If text scrolls off the screen, you can scroll back with the mouse.  To copy
output text into a mailer or editor (I recommend Notepad++, a free editor also
licensed under the GPL), highlight the text as a rectangle in the cmd window,
press <Enter> (or right-click the window icon in the upper left corner and
select Edit, then Copy), and paste it into your editor with Ctl-V (or
Edit|Paste from the typical GUI menu).

All feedback is welcome to the mail address below.


Information for Win32 Programmers
=================================

There's a .LIB import library for MS-VC++ in lib/msvc.  Simply #include
<hamlib/rig.h> (add directory to include path), include the .LIB in your
project and you're done. Note: MS-VC++ cannot compile all the Hamlib code,
but the API defined by rig.h has been made MSVC friendly :-)

As the source code for the library DLLs is licensed under the LGPL, your
program is not considered a "derivative work" when using the published
Hamlib API and normal linking to the front-end library, and may be of a
license of your choosing.  The published Hamlib API may be found at:

http://sourceforge.net/apps/mediawiki/hamlib/index.php?title=Documentation


Thank You!
==========

Patches, feedback, and contributions are welcome.

Please report problems or success to hamlib-developer@lists.sourceforge.net

Cheers,
Stephane Fillod - F8CFE
Nate Bargmann - N0NB
http://www.hamlib.org

