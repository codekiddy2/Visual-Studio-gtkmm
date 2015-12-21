%DRIVE%:
cd %INCLUDE_DIR%
if not exist gtkmm mkdir gtkmm
cd gtkmm
%ECHO_HEADERS%
xcopy %SRC_DIR%gdk\*.h /YQ
xcopy %SRC_DIR%gtk\*.h /YQ
%CHK_DIR% gdkmm mkdir gdkmm
cd gdkmm
xcopy %SRC_DIR%gdk\gdkmm\*.h /YQ
%CHK_DIR% private mkdir private
cd private
xcopy %SRC_DIR%gdk\gdkmm\private\*.h /YQ
cd ..\..\
%CHK_DIR% gtkmm mkdir gtkmm
cd gtkmm
xcopy %SRC_DIR%gtk\gtkmm\*.h /YQ
%CHK_DIR% private mkdir private
cd private
xcopy %SRC_DIR%gtk\gtkmm\private\*.h /YQ
cd %LIB_DIR%
%CHK_DIR%  gtkmm\include mkdir gtkmm\include
cd gtkmm\include
xcopy %SOLUTION_DIR%gtkmm\gtkmmconfig.h /YQ
cd ..\..\
%CHK_DIR% gdkmm\include mkdir gdkmm\include
cd gdkmm\include
xcopy %SOLUTION_DIR%gdkmm\gdkmmconfig.h /YQ
echo installing demo ...
cd %ROOT_DIR%
%CHK_DIR% share\gtkmm-3.0\demo mkdir share\gtkmm-3.0\demo
cd share\gtkmm-3.0\demo
xcopy %SRC_DIR%demos\gtk-demo\*.cc /YQ
xcopy %SRC_DIR%demos\gtk-demo\*.h /YQ
xcopy %SRC_DIR%demos\gtk-demo\*.gif /YQ
xcopy %SRC_DIR%demos\gtk-demo\*.jpg /YQ
xcopy %SRC_DIR%demos\gtk-demo\*.png /YQ
%ECHO_DOC%
cd %REF_DIR%
%CHK_DIR% gtkmm\html mkdir gtkmm\html
cd gtkmm\html
xcopy %SRC_DIR%docs\reference\html\*.* /YQ
cd ..
copy %SRC_DIR%docs\reference\*.html /Y
copy %SRC_DIR%docs\reference\*.png /Y