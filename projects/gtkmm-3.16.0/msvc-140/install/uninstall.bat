%DRIVE%:
cd %INCLUDE_DIR%
%CHK_DIR% gtkmm goto RM_LIB
%RM_H%
rmdir gtkmm /S /Q
:RM_LIB
cd %LIB_DIR%
%CHK_DIR% gtkmm goto RM_LIB2
%RM_LIB%
rmdir gtkmm /S /Q
:RM_LIB2
cd %LIB_DIR%
%CHK_DIR% gdkmm goto DONE
%RM_LIB%
rmdir gdkmm /S /Q
goto EOF
:DONE
echo folder not found
:EOF