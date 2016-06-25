%DRIVE%:
cd %INCLUDE_DIR%
if not exist glibmm mkdir glibmm
cd glibmm
echo installing headers ...
xcopy %SRC_DIR%glib\*.h /YSQ
xcopy %SRC_DIR%gio\*.h /YSQ
cd %LIB_DIR%
if not exist glibmm\include mkdir glibmm\include
cd glibmm\include
copy %SOLUTION_DIR%glibmm\glibmmconfig.h /Y
cd ..\..\
if not exist giomm\include mkdir giomm\include
cd giomm\include
copy %SOLUTION_DIR%giomm\giommconfig.h /Y
cd %REF_DIR%
if not exist glibmm\html mkdir glibmm\html
cd glibmm\html
echo installing documentation ...
xcopy %SRC_DIR%docs\reference\html\*.* /YQ