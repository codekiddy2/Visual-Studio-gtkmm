%DRIVE%:
cd %INCLUDE_DIR%
%CHK_DIR% pangomm mkdir pangomm
cd pangomm
%ECHO_HEADERS%
xcopy %SRC_DIR%pango\*.h %COPY_CMD%
%CHK_DIR% pangomm mkdir pangomm
cd pangomm
xcopy %SRC_DIR%pango\pangomm\*.h%COPY_CMD%
%CHK_DIR% private mkdir private
cd private
xcopy %SRC_DIR%pango\pangomm\private\*.h %COPY_CMD%
cd %LIB_DIR%
%CHK_DIR% pangomm\include mkdir pangomm\include
cd pangomm\include
xcopy %SOLUTION_DIR%pangomm\pangommconfig.h %COPY_CMD%
%ECHO_DOC%
cd %REF_DIR%
if not exist pangomm\html mkdir pangomm\html
cd pangomm\html
xcopy %SRC_DIR%docs\reference\html\*.* %COPY_CMD%