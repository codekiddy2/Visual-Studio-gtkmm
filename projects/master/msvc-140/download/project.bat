set WGET_DIR=$(MSYS2_DIR)usr\bin\wget.exe
set ZIP_DIR=$(ZIP_DIR)7z.exe
set PROJECTS_DIR=D:\test\
set COMPRESSED=$(PACKAGES_DIR)Compressed\
set EXTRACTED=$(PACKAGES_DIR)Extracted\
set EXCLUDE_FILE=$(ProjectDir)exclude.txt
timecmd.bat master.bat
