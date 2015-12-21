%DRIVE%:
cd %INCLUDE_DIR%
%CHK_DIR% cairomm goto RM_LIB
%RM_H%
rmdir cairomm /S /Q
:RM_LIB
cd %LIB_DIR%
%CHK_DIR% cairomm goto DONE
%RM_LIB%
rmdir cairomm /S /Q
goto EOF
:DONE
echo cairomm not found
:EOF