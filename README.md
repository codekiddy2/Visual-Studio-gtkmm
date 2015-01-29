ABOUT Visual-Studio-gtkmm:
Visual Studio 2013 projects configured to build gtk+ and gtkmm dependencies from scrach up to gtkmm.

REQUIRED DIRECTORY TREE ON LOCAL HOST:

    D:\ (partition)

        gtkmm (ROOT DIR)
    
            projects (project files)
        
            settings (setup instructions)
        
        	properties (Visual Studio properties)
    	
        	build (directory with extracted packages redy to build)

HOW-TO:
VS Projects and properties are not "movable"!
each project has it's "solution dir" indicated in appropiate setting file under /gtkmm/settings

To build, projects should be placed inside extracted source package (ie. D:\gtkmm\build\<package name>)
according to settings file from /gtkmm/settings

more information will be added in future as this is all fairly new and just recently started.
