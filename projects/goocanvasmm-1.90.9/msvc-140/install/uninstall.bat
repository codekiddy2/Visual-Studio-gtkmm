%DRIVE%:
cd %INCLUDE_DIR%
%CHK_DIR% goocanvasmm goto RM_LIB
%RM_H%
rmdir goocanvasmm /S /Q
:RM_LIB
cd %LIB_DIR%
%CHK_DIR% goocanvasmm goto DONE
%RM_LIB%
rmdir goocanvasmm /S /Q
goto EOF
:DONE
echo goocanvasmm not found
:EOF