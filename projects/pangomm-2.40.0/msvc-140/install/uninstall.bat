%DRIVE%:
cd %INCLUDE_DIR%
%CHK_DIR% pangomm goto RM_LIB
%RM_H%
rmdir pangomm /S /Q
:RM_LIB
cd %LIB_DIR%
%CHK_DIR% pangomm goto DONE
%RM_LIB%
rmdir pangomm /S /Q
goto EOF
:DONE
echo pangomm not found
:EOF