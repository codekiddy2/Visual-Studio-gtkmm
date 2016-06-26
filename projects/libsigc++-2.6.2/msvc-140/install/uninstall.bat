%DRIVE%:
cd %INCLUDE_DIR%
%CHK_DIR% sigc++ goto RM_LIB
%RM_H%
rmdir sigc++ /S /Q
:RM_LIB
cd %LIB_DIR%
%CHK_DIR% sigc++ goto DONE
%RM_LIB%
rmdir sigc++ /S /Q
goto EOF
:DONE
echo sigc++ not found
:EOF