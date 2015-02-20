set ROOT_DIR=D:\GitHub\Visual-Studio-gtkmm\output\Debug\x64
set CL=@D:\GitHub\Visual-Studio-gtkmm\projects\gettext-0.19.4\debug-64.compiler
set PATH=%ROOT_DIR%\bin;%PATH%
set LIB=%ROOT_DIR%\lib;%LIB%
set INCLUDE=%ROOT_DIR%\include\iconv;%ROOT_DIR%\include\expat;%ROOT_DIR%\include\dirnet;%ROOT_DIR%\include\unistd;%INCLUDE%
set MOZBUILDDIR=D:\gtkmm\install\mozilla-build
set MOZILLABUILD=%MOZBUILDDIR%
set MOZ_TOOLS=%MOZBUILDDIR%moztools-x64
start /d "%USERPROFILE%" "" "%MOZILLABUILD%"\msys\bin\bash --login -i