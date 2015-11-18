**DESCRIPTION**

This file describes "fundamenal" setup that applies to all projects.
There is no exception, steps mentioned here must be applied to all
projects before doing anything else!


**One time setup**
One time setup as the title implies is a setup you set once
(in beginning) and forget about it.

These settings will apply to all solutions and all projects!

To review these settings open property manager under

>View > Property manager

In property manager expand whiever project node and then whichever
configuration node and find "base_setup".props property sheet and open it.

Settings which need to be reviewed here are as follows:

>Common properties > User macros

Make sure paths mentioned here point to correct locations.


**Solution setup**
Solution setup is a kind of setup you will need to review for
each solution.

Solution contains multiple projects, but there are settings which apply
to all projects within that solution regardless of configuration type.

These settings are saved in "solution level" property sheet.
The name of solution level property sheet is:

>solution_"solution name".props

In property manager expand whiever project node and then whichever
configuration node and open solution level property sheet.

Settings that need to be reviewed are as follows:

>Common properties > User macros > $(SRC_DIR)

Make sure the path and package version specified here is correct

$(SRC_DIR) macro exist in every solution level property sheet, however
some solution level properties might contain other macros, if so
please review them too to make sure they are correct.

If unsure, leave them alone.


**Configuration headers**
Some projects might contain configuration headers, and if so we
need to check their contents and update entries as needed.

Usually but not always these headers are created once for specific
package version, opertaing system and compiler version.

To check if project contains such header expand each project node
in solution explorer and look for "Config" folder.

If there is such folder, it should contain a header file "*config.h"
open the file and check that their contents are correct and up to date.

Contents (MACROS) that could be out of date are:
Package version, various paths, existence of headers and so on.
If unsure about specific macro leave them alone.


**Configuration files**
Some solutions might contain configuration files.

TODO: add configuration files to solution and update this readme.


**Development environment settings**
I suppose you installed Visual Studio Code as told on
Visual-Studio-gtkmm wiki page.

	https://github.com/codekiddy2/Visual-Studio-gtkmm/wiki

Use Visual Studio code to browse following path:

	D:\Github\Visual-Studio-gtkmm\Readme

This folder contains readme files, you don't need to read them all
except following files:

* locale.md
* symbold.md
* path.md
* debugging.md
* directories.md

Make sure you set up your system and IDE as told.


**Final step**
In solution explorer beside this file there might be other files
named by package and their version. (ex. libiconv-1.14.txt)

These files contain specific information and additional instructions
you need to perform before starting the build process.

there migh be more such files but you need to read the one with
latest version number. that is the package which we will build.


**Troubleshooting**
You can read other readme files in:

	D:\Github\Visual-Studio-gtkmm\Readme
	
Why we use Visual Studio Code now becomes clear, it has nice syntax
highlighting and allows you browse repository quickly.

Also you'll be able to read any kind of files including project files it self,
as well as files which can't be normaly read by using Windows notepad.
