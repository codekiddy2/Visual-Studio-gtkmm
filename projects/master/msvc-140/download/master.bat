@echo off

REM if following stuff does not exist there nothing will work
if not exist %WGET_DIR% goto FAIL_WGET
if not exist %ZIP_DIR% goto FAIL_ZIP
if not exist %EXCLUDE_FILE% goto FAIL_EXCLUDE_FILE

REM optional, not needed
if not exist %COMPRESSED% mkdir %COMPRESSED%
if not exist %EXTRACTED% mkdir %EXTRACTED%
if not exist %PROJECTS_DIR% mkdir %PROJECTS_DIR%

REM save current path
pushd %cd%
call download.bat

REM popd to restore path saved by pushd
popd
call extract.bat

popd
call copy.bat

REM either all done or error
goto DONE

:FAIL_WGET
echo %WGET_DIR% not found
goto DONE

:FAIL_ZIP
echo %ZIP_DIR% not found
goto DONE

:FAIL_EXCLUDE_FILE
echo %EXCLUDE_FILE% not found
goto DONE

:DONE
