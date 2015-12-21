%DRIVE%:
cd %INCLUDE_DIR%
%CHK_DIR% cairomm\cairomm mkdir cairomm\cairomm
cd cairomm\cairomm
%ECHO_HEADERS%
xcopy %SRC_DIR%cairomm\*.h %COPY_CMD%
copy cairomm.h ..\
cd %LIB_DIR%
%CHK_DIR% cairomm\include mkdir cairomm\include
cd cairomm\include
xcopy %SOLUTION_DIR%cairomm\cairommconfig.h %COPY_CMD%
cd %REF_DIR%
%CHK_DIR% cairomm\html mkdir cairomm\html
cd cairomm\html
%ECHO_DOC%
xcopy %SRC_DIR%docs\reference\html\*.* %COPY_CMD%