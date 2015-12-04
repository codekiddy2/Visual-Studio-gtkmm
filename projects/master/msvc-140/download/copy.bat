@echo off

REM delay variable initialization to run time
setlocal enabledelayedexpansion

REM set status to filter output from robocopy, /b omitted since search strings do not start at the beginning of a line
REM /r to use "/c:" as regular exprssions
set STATUS=findstr /r /c:"Total" /c:"Dirs" /c:"Files :  "

REM copy top level directory tree so that second (currently not needed - disabled)
REM /E for all subdirs, /LEV:2 for top level folders, /XF for exclude all files
REM robocopy %EXTRACTED% %PROJECTS_DIR% /E /LEV:2 /XF "*.*" | %STATUS%

cd %EXTRACTED%

REM for each folder in extracted directory do...
for /D %%s in ("%EXTRACTED%*") do (

	REM get the names of extracted root folders into '*' variable
	REM we'll use this names to append to destination directory for robocopy
	REM go into current directory 
	cd %%s

	REM get the name of directory (not full path, just package root folder name including version number)
	REM save the name into '*' variable
	for %%* in (.) do set pwd=%%~nx*

	REM set src and dest variables for robocopy (full paths)
	REM to get full path name append package name and version to %EXTRACTED% and %PROJECTS_DIR% paths
	set src=%EXTRACTED%!pwd!
	set dest=%PROJECTS_DIR%!pwd!

	echo.
	echo **********************************************************************
	echo.
	echo copying !pwd! ...
	echo.
	REM copy stuf from source to projects dir, print only stuff set by %STATUS%
	robocopy !src! !dest! /S /NDL /NFL | %STATUS%
)
endlocal
