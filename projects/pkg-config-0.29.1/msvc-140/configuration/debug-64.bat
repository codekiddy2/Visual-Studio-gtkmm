set ROOT_DIR=D:\GitHub\Visual-Studio-gtkmm\output\Debug\x64
set CL=@D:\GitHub\Visual-Studio-gtkmm\projects\pkg-config-0.28\debug-64.compiler
set PATH=%ROOT_DIR%\bin;%PATH%
set LIB=%ROOT_DIR%\lib;%LIB%
set INCLUDE=%ROOT_DIR%\include;%ROOT_DIR%\include\iconv;%ROOT_DIR%\include\expat;%INCLUDE%
set MOZBUILDDIR=D:\gtkmm\install\mozilla-build
set MOZILLABUILD=%MOZBUILDDIR%
set MOZ_TOOLS=%MOZBUILDDIR%moztools-x64
start /d "%USERPROFILE%" "" "%MOZILLABUILD%"\msys\bin\bash --login -i