
Here is a list of settings for Visual Studio which will
make build process and navigation much easier:


When clicking on File > open project direct me straight to $(PROJECTS_DIR)

* Tools > Options > Projects and solutions > General
	* Projects location

	
Show me error list when build fails

* Tools > Options > Projects and solutions > General
	* Always show error list if build finishes with errors


Don't prompt me to build, just build

* Tools > Options > Projects and solutions > "On run, when projects are out of date"


Show me line numbers

* Tools > Options > Text editor > All languages
	* line numbers


Show useful buttons

* Tools > Customize > Toolbars
	* Build
		* Add command > build
			* compile
			* build only project
			* clean only project
			* link
	* Standard
		* Add command > file
			* open project
	* Editor
		
Debug currently selected project

* Right click solution > Set startup projects > current selection
