**Stuff that need to be done aka "Road map"**

* DEFINE PREPROCESSOR FOR CMAKE ON CMAKE PROJECTS
* add build log file to solution from inermediate directory
* build freetype dll (see details on http://stackoverflow.com/questions/6207176/compiling-freetype-to-dll-as-opposed-to-static-library)
* configure remaining install projects to install documentation
* clean cmd line entries
* create master solution
* test GL extensions with cairo.
* use mainCRTStartup for base_windows.props and update dpendent projects
* create master config.h for all solutions and solution level config.h headers
* [HIGH PRIORITY] separate each project into it's own folder in solution directory ( it will be easy to manage gitignore file )
* sincronyze compiler/linker flags for custom build cmd projects.
* minimize amount of build events in project to reduce the "cmd exit = blah"
* add version number to each lib/dll file.
* [HIGH PRIORITY] move all solutions into source's root directory ( make TODO 10 and 54 first! )
* [HIGH PRIORITY] add missing projects to existing solutions (test projects, different versions...)
* [HIGH PRIORITY] add general "shared" readme file into each solution.
* [HIGH PRIORITY] some projects do not need configuration any more, check which one's and update readme files
* ran batch build for all projects and all configurations.
* check inheritance consitency of all projects
* [DONE?] new directory structure for multi versioning. (problem with zlib cmd entries)
* [HIGH PRIORITY] same intermediate root directory for asm and C/C++ projects
* [HIGH PRIORITY] define location for *.def files in solution folder, and how to "install" them into SYMBOLS_DIR ( TODO 14 first! )
* build all gst-* sources and dependencies (video, audio ...)
* link asm outputs automatically to linker instead of object files.
* define path for nasm and similar tools in properties, so that %PATH% won't be needed
* [HIGH PRIORITY] merge TODO's from readme files here
* make solution for libgw32
* [HIGH PRIORITY] rename projects (in windows explorer) so that the name is the same as in solutions ( TODO 14 first! )
* create ICU project to optionally link with harbuzz, libxml and others?? (what with expat then?)
* RETURN "TEST CALLER APP" BACK TO FFI! test with older versions!
* check for config header of each solution for consistency such as targeted widnows.
* [HIGH PRIORITY] rename gtk_stack.props into stack_gtk.props and update projects ( TODO 14 first )
* add "setup" solution and root property page for base path (REPO_DIR...)
* [HIGH PRIORITY] move readme folder into root of repository ( TODO 14 first!)
* [HIGH PRIORITY] create a new branch for most recent "unstable" builds, and get rid of "old" folder.
* [DONE?] create "user" properties for end use.
* remove VC-upgrade macros and properties, and then test projects.
* implement custom *.pc files for pkg-config
* check linker library inputs because some properties added new linker inputs, no need to specify an input 2 times.
* some configurations (different) should install different headers, chaeck install projects.
* set linker /IGNORE and reenable threat linker warnings as errors in some solutions (glib...)
* instead on manualy entering linker inputs for each project there should be something like "consume" or "use" properties for each solution

**New TODO's since msvc-140**

* edit solution and project versions
* create editline and readline projects
* update wiki and give detailed info
* define what solutino version numbers mean
* not all projects follow design rules
* some projects output lib files for executables (test-iconv.exe)
* some projects output pdb into both bin and symbols dir (all projects?)
* decide what to do with outdated projects (older versions)
* not all links point to direct download page (GNOME projects)
* it is possible that newer version packages have source files and headers which are not yet included in projects.
* check references, all need to have "same" settings. ie. copy local etc...
* describe properties into some readme, their function etc.
* [HIGH PRIORITY] make project level properties ( benefit: easy relocation of solutions - it will inherit all other properties,  and less work to maintain flags)
* [HIGH PRIORITY] remove version numbers from project directories, easier to manage git and updates. ( or move solutions out of sources )
* [HIGH PRIORITY] move test/example projects into one directory "Tests" inside solution directory ( TODO 10 first? and others )
* [HIGH PRIORITY] make all test projects have their cmd line needed stuff located in output directory (png's, files...)


