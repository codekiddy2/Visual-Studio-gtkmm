**ABOUT Visual-Studio-gtkmm:**

Visual Studio 2013 projects configured to build gtk+ and gtkmm dependencies from scrach up to gtkmm.
Each folder here contains a README to explain how to use it's contents.

**HOW-TO:**

VS Projects and properties are not "movable"!
each project has it's "solution dir" indicated in appropiate setting file under /gtkmm/settings

To build, projects should be placed inside extracted source package (ie. D:\gtkmm\build\<package name>)
according to settings file from /gtkmm/settings

more information will be added in future as this is all fairly new and just recently started.

**REQUIRED DIRECTORY TREE:**
```
    D:\ (partition
        gtkmm (ROOT DIR)
            projects (project files)
            settings (setup instructions)
        	properties (Visual Studio properties)
        	build (directory with extracted packages redy to build)
        	output (install dir for finished build)
        	patch (modified source/header files for msvc compilation)
        	packages (official package sources)
        	extraction (extracted packages)
        	install (the place where tools are installed)
        	    visualstudio (msvc)
        	    Cmake (build tools)
        	    nasm (assembler)
        	    7-Zip (to extract the packages)
        	    mozilla-build (to configure unfriendly sources)
        	    Symbols (MS Symbols for debugging)
        	    Python3 (Latest version of python)
        	    Vim (usefull to read files in "formated" way)
```   
