%DRIVE%:
cd %INCLUDE_DIR%
%CHK_DIR% atkmm goto RM_LIB
%RM_H%
rmdir atkmm /S /Q
:RM_LIB
cd %LIB_DIR%
%CHK_DIR% atkmm goto DONE
%RM_LIB%
rmdir atkmm /S /Q
goto EOF
:DONE
echo atkmm not found
:EOF