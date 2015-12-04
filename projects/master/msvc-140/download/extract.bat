@echo off
setlocal

REM set status to filter output from 7zip, /b to match beginning of a line, /r to use "/c:" as a regular exprssions
REM /c:"what to search?" and thus output to output window...
set STATUS=findstr /b /r /c:"Processing archive" /c:"Everything is Ok" /c:"Error" /c:"there is no such archive" /c:"Incorrect command line" /c:"cannot find archive" /c:"Sub items Errors"

REM set command for 7zip, x for extract, -aos to skip extracting existing files
REM -xr@%EXCLUDE_FILE% the exclude file contains folder/file names and extensions which won't be extracted
set EXTRACT=%ZIP_DIR% x -aos -xr@%EXCLUDE_FILE%

cd %COMPRESSED%

REM extract tar compressed files to tar subdirectory
REM using "if exist" checks to avoid errors in output
REM -o for output directory

if exist *.gz %EXTRACT% -otar *.gz
if exist *.xz %EXTRACT% -otar *.xz
if exist *.bz2 %EXTRACT% -otar *.bz2

if exist *.7z %EXTRACT% -o%EXTRACTED% *.7z

REM we can't bulk extract zip files since some do not have root directory or package version
%EXTRACT% -o%EXTRACTED% jasper-1.900.1.zip | %STATUS%
%EXTRACT% -o%EXTRACTED% icu4c-56_1-src.zip | %STATUS%

REM assign version number to icu and then delete old "icu" folder
echo appending version number to ICU ...
robocopy %EXTRACTED%icu %EXTRACTED%icu-56.1 /MOVE /E /NDL /NFL /NJH /NJS
echo clean junk left by robocopy ...
if exist %EXTRACTED%icu RMDIR %EXTRACTED%icu /S /Q

REM extract to correct folders
%EXTRACT% -o%EXTRACTED%dirent-1.21 dirent-1.21.zip | %STATUS%
%EXTRACT% -o%EXTRACTED%cryptopp-5.6.3 cryptopp563.zip | %STATUS%
%EXTRACT% -o%EXTRACTED%readline-5.0-1 readline-5.0-1-src.zip | %STATUS%

REM finish off tar folder
cd tar
%EXTRACT% -o%EXTRACTED% *.tar | %STATUS%

endlocal
