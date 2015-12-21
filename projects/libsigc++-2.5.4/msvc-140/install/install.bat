%DRIVE%:
cd %INCLUDE_DIR%
%CHK_DIR% sigc++\sigc++ mkdir sigc++\sigc++
cd sigc++\sigc++
%ECHO_HEADERS%
xcopy %SRC_DIR%sigc++\*.h /S %COPY_CMD%
cd
xcopy sigc++.h ..\ %COPY_CMD%
cd %LIB_DIR%
%CHK_DIR% sigc++\include mkdir sigc++\include
cd sigc++\include
xcopy %MOD_DIR%sigc++config.h /Y
%ECHO_DOC%
cd %REF_DIR%
%CHK_DIR% sigc++\html mkdir sigc++\html
cd sigc++\html
xcopy %SRC_DIR%docs\reference\html\*.* %COPY_CMD%
