%DRIVE%:
cd %INCLUDE_DIR%
%CHK_DIR% goocanvasmm\goocanvasmm\private mkdir goocanvasmm\goocanvasmm\private
cd goocanvasmm\goocanvasmm\private
%ECHO_HEADERS%
xcopy %SRC_DIR%goocanvas\goocanvasmm\private\*.h %COPY_CMD%
cd ..
xcopy %SRC_DIR%goocanvas\goocanvasmm\*.h %COPY_CMD%
cd ..
xcopy %SRC_DIR%goocanvas\goocanvasmm.h %COPY_CMD%
cd %LIB_DIR%
if not exist goocanvasmm\include mkdir goocanvasmm\include
cd goocanvasmm\include
copy %SRC_DIR%goocanvas\goocanvasmmconfig.h
cd %REF_DIR%
if not exist goocanvasmm\html mkdir goocanvasmm\html
cd goocanvasmm\html
echo installing documentation ...
xcopy %SRC_DIR%doc\reference\html\*.* %COPY_CMD%