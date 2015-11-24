**DESCRIPTION**

This file describes "fundamenal" setup that applies to all projects.
Steps mentioned here must be applied to all
projects before compilation!

More detailed information is available on Visual-Studio-gtkmm-wiki:

https://github.com/codekiddy2/Visual-Studio-gtkmm/wiki

**One time setup**

One time setup as the title implies is a setup you set once
(in beginning) and forget about it.

These settings will apply to all solutions and all projects!

To review these settings open property manager under

>View > Property manager

In property manager expand whichever project node and then whichever
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

Most solutions have a folder called "Config"

If there is such folder, it should contain a header file "*config.h"
open the file and check that their contents are correct and up to date.

Contents (MACROS) that could be out of date are:
Package version, various paths, existence of headers and so on.
If unsure about specific macro leave them alone.


**Configuration files**

Some solutions might contain configuration files.

There are 3 files in total needed to configure sources:

* *.bat
* *.compiler
* *.sh

what's the name of the file depends on which configuration you build.
ie. for debug x64 the files are named:

* Debug64.bat
* Debug64.compiler
* Debug64.sh

the batch (*.bat) file sets environment variables and provides path to
compiler settings.

This file must be run from Visual Studio command prompt (cmd).
there are 2 kinds of Visual Studio cmd. x64 and x86.

Which one you use depends on your build type.
Once the bach file is run it will open up MSYS2 shell and
provide compiler settings which are saved in *.compiler file.

From within MSYS2 shell you run the *.sh file which contains the
command used to configure sources.

These files might be out of date or they might not even exist for your
configuration type.

You can edit them in solution explorer under "Config" folder.

You are advised to update them and additionaly read following files:

* mozilla-build.md
* cmake.md
* configuration.md
* prepare MSYS2.md

thse files should help explain how to edit and update before mentioned
configuration files.


**Development environment settings**

I suppose you installed Visual Studio Code as told on
Visual-Studio-gtkmm wiki page.

	https://github.com/codekiddy2/Visual-Studio-gtkmm/wiki

Use Visual Studio code to browse following path:

	D:\Github\Visual-Studio-gtkmm\Readme

This folder contains readme files, you don't need to read them all
except following files:

* locale.md
* symbols.md
* path.md
* debugging.md
* directories.md

Make sure you set up your system and IDE as told.


**Test projects**

Almost each solution has several test projects, their purpose is to
test the library ( dll or lib ) after successful compilation.

they are extra useful in cases where we have no idea which library
is causing troubles.

In which case you can just go down the dependency tree and test each
library until you find fauly one.

If you wish to run test projects for multiple configurations (ex. x86 x64)
the best way is to set PATH in debugger environment instead of modifing
system path in control panel like so:

In property manager Select all test projects at once and click on "properties"
button, or right click properties, then in property pages that opens set
* "Configuration" to "All configurations"
* "Platform" to "All platforms"
* Common properties > Debugging > Environment > path=$(BIN_DIR);%path%


**More info**

In solution explorer beside this file there are other files
named by package and their version. (ex. libiconv-1.14.txt)

These files contain specific information and additional instructions
you need to perform before starting the build process.

there migh be more such files but you need to read the one with
latest version number. that is the package which we will build.

the "troubleshooting" file can help to solve problems in case of
build errors.

You should reffer to "troubleshooting.md" file after ensuring you've
checked suggestions mentioned here and on the wiki page.
