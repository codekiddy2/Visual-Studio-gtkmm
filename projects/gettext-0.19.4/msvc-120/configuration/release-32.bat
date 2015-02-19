set ROOT_DIR=D:\GitHub\Visual-Studio-gtkmm\output\Release\Win32
set CL=@D:\GitHub\Visual-Studio-gtkmm\projects\gettext-0.19.4\release-32.compiler
set PATH=%ROOT_DIR%\bin;%PATH%
set LIB=%ROOT_DIR%\lib;%LIB%
set INCLUDE=%ROOT_DIR%\include\iconv;%ROOT_DIR%\include\expat;%INCLUDE%
set MOZBUILDDIR=D:\gtkmm\install\mozilla-build
set MOZILLABUILD=%MOZBUILDDIR%
set MOZ_TOOLS=%MOZBUILDDIR%moztools
start /d "%USERPROFILE%" "" "%MOZILLABUILD%"\msys\bin\bash --login -i