**ABOUT Visual-Studio-gtkmm:**

Visual Studio 2013 projects configured to build gtk+ and gtkmm dependencies from scrach up to gtkmm.
Each folder here contains a README to explain how to use it's contents.

**COPYRIGHT NOTICE:**

I'm using serveral resoures from various sites and modify them with a goal to be compatible and easy to use.
>PACKAGES: all packages and source files are from official websites, some were modified in order to either remove bugs or to make them friendly with msvc.

>Visual Studio Projects: I made some projects my self but some of them are copy pasted and modified with a goal to make them ready for new versions and do things such as update DLL exports or add missing source files..., here is a short list from where I got these:
```
https://wiki.gnome.org
http://hexchat.github.io/
https://github.com/winlibs
from official source packages
and of course by using google...
```
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
        	properties (Visual Studio properties and compiler settings)
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
