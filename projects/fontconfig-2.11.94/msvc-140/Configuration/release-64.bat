set ROOT_DIR=D:\GitHub\Visual-Studio-gtkmm\output\v140\Release\x64
set CL=@D:\Github\Visual-Studio-gtkmm\projects\fontconfig-2.11.94\release-64.compiler
set PATH=%ROOT_DIR%\bin;%PATH%
set LIB=%ROOT_DIR%\lib;%LIB%
set INCLUDE=%ROOT_DIR%\include\iconv;%ROOT_DIR%\include\expat;%ROOT_DIR%\include\dirent;%ROOT_DIR%\include\unistd;%ROOT_DIR%\include\harfbuzz;%ROOT_DIR%\include\freetype;%INCLUDE%
set MOZBUILDDIR=D:\GitHub\install\mozilla-build
set MOZILLABUILD=%MOZBUILDDIR%
set MOZ_TOOLS=%MOZBUILDDIR%moztools-x64
start /d "%USERPROFILE%" "" "%MOZILLABUILD%"\msys\bin\bash --login -i
exit