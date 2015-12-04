@echo off

REM delete all, faster than using windows explorer

echo removing %PROJECTS_DIR%
if exist %PROJECTS_DIR% rmdir %PROJECTS_DIR% /S /Q

echo removing %EXTRACTED%
if exist %EXTRACTED% rmdir %EXTRACTED% /S /Q

echo removing %COMPRESSED%tar
if exist %COMPRESSED%tar rmdir %COMPRESSED%tar /S /Q

REM no need to download again, instead perform tests (below)
REM rmdir D:\Github\Visual-Studio-gtkmm\packages\Compressed /S /Q


setlocal

REM set status to filter output from 7zip, /b to match beginning of a line, /r to use "/c:" as regular exprssions
REM /c:"what to search?" and thus output to output window...
set STATUS=findstr /b /r /c:"Processing archive" /c:"Everything is Ok" /c:"Error" /c:"there is no such archive" /c:"Incorrect command line" /c:"cannot find archive" /c:"Sub items Errors"


REM set command for 7zip, t for test
echo performing tests, wait for status ...

%ZIP_DIR% t %COMPRESSED%* | %STATUS%

endlocal
