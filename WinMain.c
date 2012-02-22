/*!
\file WinMain.c
\brief Initialization for Windows EXE using MSVCRT.DLL

The is is the startup/shutdown wrapper for console applications which
uses WinMain().  It handles startup and shutdown for C/C++ applications
of the C/C++ language library.

*/

#define _WINMAIN_

#undef _UNICODE
#undef UNICODE

#ifndef _MBCS
#define _MBCS
#endif  /* _MBCS */

// Code is actually in this file.
#include "main.c"
