%DRIVE%:
cd %INCLUDE_DIR%
%CHK_DIR% atkmm mkdir atkmm
cd atkmm
%ECHO_HEADERS%
xcopy %SRC_DIR%atk\*.h %COPY_CMD%
%CHK_DIR% atkmm mkdir atkmm
cd atkmm
xcopy %SRC_DIR%atk\atkmm\*.h %COPY_CMD%
%CHK_DIR% private mkdir private
cd private
xcopy %SRC_DIR%atk\atkmm\private\*.h %COPY_CMD%
cd %LIB_DIR%
%CHK_DIR% atkmm\include mkdir atkmm\include
cd atkmm\include
xcopy %SOLUTION_DIR%atkmm\atkmmconfig.h %COPY_CMD%
%ECHO_DOC%
cd %REF_DIR%
%CHK_DIR% atkmm\html mkdir atkmm\html
cd atkmm\html
xcopy %SRC_DIR%doc\reference\html\*.* %COPY_CMD%