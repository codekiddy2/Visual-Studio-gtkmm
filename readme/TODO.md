**Stuff that needs to be done aka "Road map"**

* [HIGH PRIORITY] move all solutions into source's root directory
* [HIGH PRIORITY] rename projects (in windows explorer) so that the name is the same as in solutions
* [HIGH PRIORITY] separate each project into it's own folder in solution directory
* [HIGH PRIORITY] move test/example projects into one directory "Tests" inside solution directory
* [HIGH PRIORITY] define location for *.def files in solution folder, and how to "install" them into SYMBOLS_DIR
* [HIGH PRIORITY] rename gtk_stack.props into stack_gtk.props and update projects
* DEFINE PREPROCESSOR FOR CMAKE ON CMAKE PROJECTS
* add build log file to solution from inermediate directory
* configure remaining install projects to install documentation
* clean cmd line entries
* create master solution
* test GL extensions with cairo.
* use mainCRTStartup for base_windows.props and update dpendent projects
* create master config.h for all solutions and solution level config.h headers
* sincronyze compiler/linker flags for custom build cmd projects.
* minimize amount of build events in project to reduce the "cmd exit = blah" (edit: check for existence of dependent dlls or libs, command fails if there is project build failed)
* add version number to each lib/dll file.
* [HIGH PRIORITY] add missing projects to existing solutions (test projects, different versions...)
* [HIGH PRIORITY] some projects do not need configuration any more, check which one's and update readme files
* ran batch build for all projects and all configurations.
* check inheritance consitency of all projects
* new directory structure for package multi versioning.
* [HIGH PRIORITY] same intermediate root directory for asm and C/C++ projects
* build all gst-* sources and dependencies (video, audio ...)
* link asm outputs automatically to linker instead of object files.
* define path for nasm and similar tools in properties, so that %PATH% won't be needed
* [HIGH PRIORITY] merge TODO's from readme files here
* make solution for libgw32
* create ICU project to optionally link with harbuzz, libxml and others?? (what with expat then?)
* RETURN "TEST CALLER APP" BACK TO FFI! test with older versions!
* check for config header of each solution for consistency such as targeted widnows.
* add "setup" solution and root property page for base path (REPO_DIR...)
* [HIGH PRIORITY] create a new branch for most recent "unstable" builds.
* [DONE?] create "user" properties for end use.
* remove VC-upgrade macros and properties, and then test projects.
* some solutions contain *.pc files, remove them.
* check linker library inputs because some properties added new linker inputs, no need to specify an input 2 times.
* some configurations (different) should install different headers, chaeck install projects.
* set linker /IGNORE and reenable threat linker warnings as errors in some solutions (glib...)
* instead on manualy entering linker inputs for each project there should be something like "consume" or "use" properties for each solution
* edit solution and project versions
* create editline and readline projects
* define what solution version numbers means
* not all projects follow design rules
* some projects output lib files for executables (test-iconv.exe)
* some projects output pdb into both bin and symbols dir (all projects?) (edit, only debug configurations, for static libs into SYMBOLS_DIR for dlls and exe into BIN_DIR, behavior due to incremental linking and /Zi option: https://msdn.microsoft.com/en-us/library/yd4f8bd1(v=vs.90).aspx)
* not all links point to direct download page (GNOME projects)
* it is possible that newer version packages have source files and headers which are not yet included in projects.
* check references, all need to have "same" settings. ie. copy local etc...
* describe properties into some readme, their function etc.
* [HIGH PRIORITY] make project level properties ( benefit: easy relocation of solutions - it will inherit all other properties, and less work to maintain flags)
* [HIGH PRIORITY] remove version numbers from project directories, easier to manage git and updates. ( or move solutions out of sources )
* [HIGH PRIORITY] make all test projects have their cmd line needed stuff located in output directory (png's, files...)
* check inclusion of headers, update properties to use macros and not relative directories.
* [HIGH PRIORITY] some test projects with both static and release configurations might link against either dll or lib only, instead of by configuration type 
* not all projects have /Zi flag set (sellect them all to quickly see the "different options"
* compile with $(INCLUDE_DIR) removed from stack_gtk.props, it's redundant and opens 2 folders on #include
* only dll's generate a map file, check why..
* [HIGH PRIORITY] define against which libs projects link, dll.lib or lib, some test projects ie. link differently for each configuration. (harfbuzz most notably)
* some projects create output folders within solution, chech which ones.
* searching projects folder, it turns out there are a lot of pdb files, check if any project is miscofingured about symobls
* check which source files are missing and which are no longer needed in projects.
* check pdb output names when building both lib and dll in same solution
* project_test.props can inherit base_console.props directly (edit: test project can be window or dll base, so no)
* project_test.props should be below solution level property, not above.
* fontconfig when built, gets involed into other projects, check includes.
* link glib with pcre2
* make single threaded configurations and ARM configuration (hint: solution props inherit "threading" property sheet)
* make use of export libraries.
* check which projects output random files and update gitignore
* properties for (exe's) tools, samples..., same as for test projects for separate directory
