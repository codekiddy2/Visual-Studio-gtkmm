@echo off
REM delete all, faster than using windows explorer

echo remove PROJECTS_DIR
rmdir D:\test /S /Q

echo remove EXTRACTED DIR
rmdir D:\Github\Visual-Studio-gtkmm\packages\Extracted /S /Q

echo remove COMPRESSED DIR
rmdir D:\Github\Visual-Studio-gtkmm\packages\Compressed\tar /S /Q

REM no need to download again
REM rmdir D:\Github\Visual-Studio-gtkmm\packages\Compressed /S /Q
