%DRIVE%:
cd %INCLUDE_DIR%
%CHK_DIR% glibmm goto RM_LIB
%RM_H%
rmdir glibmm /S /Q
:RM_LIB
cd %LIB_DIR%
%CHK_DIR% glibmm goto RMLIB2
%RM_LIB%
rmdir glibmm /S /Q
:RMLIB2
cd %LIB_DIR%
%CHK_DIR% giomm goto DONE
%RM_LIB%
rmdir giomm /S /Q
goto EOF
:DONE
echo folder not found
:EOF