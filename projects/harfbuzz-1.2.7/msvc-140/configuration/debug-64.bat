@echo off
set REPO_DIR=D:\GitHub\Visual-Studio-gtkmm
set INSTALL_DIR=D:\Github\Install
set ROOT_DIR=%REPO_DIR%\output\v140\Debug\x64
set INCLUDE_DIR=%ROOT_DIR%\include
set COMPILER_DIR=%REPO_DIR%\projects\harfbuzz-1.1.2
set LIB_DIR=%ROOT_DIR%\lib

set LIB=%LIB_DIR%;%LIB%
set PKG_CONFIG_PATH=%ROOT_DIR%\share\pkgconfig

set PATH=%ROOT_DIR%\bin;%ROOT_DIR%\bin\tools;%PATH%
set PATH=%INSTALL_DIR%\Python35\x64;%INSTALL_DIR%\Python35\x64\Scripts;%PATH%
set PATH=%INSTALL_DIR%\CMake\bin;%INSTALL_DIR%\nasm;%INSTALL_DIR%\BoostBuild\bin;%PATH%

REM Where is Perl installed?
REM set PATH=%INSTALL_DIR%\Perl\bin;%PATH%
set PATH=%INSTALL_DIR%\Perl64\bin;%PATH%

REM comment out CL to compile with default compiler options
set CL=@%COMPILER_DIR%\debug-64.compiler

REM update includes above GTK+
set INCLUDE=%INCLUDE_DIR%\editline;%INCLUDE%
set INCLUDE=%INCLUDE_DIR%\;%INCLUDE%
set INCLUDE=%INCLUDE_DIR%\jbig;%INCLUDE%
set INCLUDE=%INCLUDE_DIR%\lzma;%INCLUDE%
set INCLUDE=%INCLUDE_DIR%\goocanvas;%INCLUDE%
set INCLUDE=%INCLUDE_DIR%\gettext\intl;%INCLUDE%
set INCLUDE=%INCLUDE_DIR%\gettext\libasprintf;%INCLUDE%
set INCLUDE=%INCLUDE_DIR%\iconv;%INCLUDE%
set INCLUDE=%INCLUDE_DIR%\gstreamer;%INCLUDE%
set INCLUDE=%INCLUDE_DIR%\gdk-pixbuf;%INCLUDE%
set INCLUDE=%INCLUDE_DIR%\atk;%INCLUDE%
set INCLUDE=%INCLUDE_DIR%\glib;%INCLUDE%
set INCLUDE=%INCLUDE_DIR%\dirent;%INCLUDE%
set INCLUDE=%INCLUDE_DIR%\harfbuzz;%INCLUDE%
set INCLUDE=%INCLUDE_DIR%\expat;%INCLUDE%
set INCLUDE=%INCLUDE_DIR%\libxml;%INCLUDE%
set INCLUDE=%INCLUDE_DIR%\zlib;%INCLUDE%
set INCLUDE=%INCLUDE_DIR%\jpeg-turbo;%INCLUDE%
set INCLUDE=%INCLUDE_DIR%\freetype;%INCLUDE%
set INCLUDE=%INCLUDE_DIR%\fontconfig;%INCLUDE%
set INCLUDE=%INCLUDE_DIR%\png;%INCLUDE%
set INCLUDE=%INCLUDE_DIR%\ffi;%INCLUDE%
set INCLUDE=%INCLUDE_DIR%\tiff;%INCLUDE%
set INCLUDE=%INCLUDE_DIR%\pixman;%INCLUDE%
set INCLUDE=%INCLUDE_DIR%\cairo;%INCLUDE%
set INCLUDE=%INCLUDE_DIR%\pango;%INCLUDE%
set INCLUDE=%INCLUDE_DIR%\pcre2;%INCLUDE%
set INCLUDE=%INCLUDE_DIR%\pcre;%INCLUDE%
set INCLUDE=%INCLUDE_DIR%\bzip2;%INCLUDE%
set INCLUDE=%INCLUDE_DIR%\gtk;%INCLUDE%
set INCLUDE=%INCLUDE_DIR%\icu;%INCLUDE%
set INCLUDE=%LIB_DIR%\glib\include;%INCLUDE%

call D:\Github\Install\msys64\mingw64_shell.bat
