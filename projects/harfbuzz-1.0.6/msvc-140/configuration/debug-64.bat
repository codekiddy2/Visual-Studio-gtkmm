set ROOT_DIR=D:\GitHub\Visual-Studio-gtkmm\output\Debug\x64
set CL=@D:\GitHub\Visual-Studio-gtkmm\projects\harfbuzz-0.9.38\debug-64.compiler
set PATH=%ROOT_DIR%\bin;%PATH%
set LIB=%ROOT_DIR%\lib;%LIB%
set INCLUDE=%ROOT_DIR%\include;%ROOT_DIR%\include\iconv;%ROOT_DIR%\lib\glib\include;%ROOT_DIR%\include\glib;%ROOT_DIR%\include\freetype;%INCLUDE%
set MOZBUILDDIR=D:\gtkmm\install\mozilla-build
set MOZILLABUILD=%MOZBUILDDIR%
set MOZ_TOOLS=%MOZBUILDDIR%moztools-x64
start /d "%USERPROFILE%" "" "%MOZILLABUILD%"\msys\bin\bash --login -i