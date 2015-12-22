**Stuff that needs to be done aka "Road map"**


**HIGH PRIORITY TASKS**

* convert install projects to make file projects, (for clean, build and rebuild, ex. to remove headers)
* move all solutions into source's root directory
* rename projects (in windows explorer) so that the name is the same as in solutions
* separate each project into it's own folder in solution directory
* move test/example projects into one directory "Tests" inside solution directory
* rename gtk_stack.props into stack_gtk.props and update projects, and few others..
* add missing projects to existing solutions (test projects, different versions...)
* same intermediate root directory for asm and C/C++ projects
* merge TODO's from readme files here
* make all test projects have their cmd line needed stuff located in output directory (png's, files...)
* some test projects with both static and release configurations might link against either dll or lib only, instead of by configuration type 
* define against which libs projects link, dll.lib or lib, some test projects ie. link differently for each configuration. (harfbuzz most notably)
* configuration should be done with MSYS2 only, avoid using mozilla-build
* consider: smaller type check turn off for entry stack.
* compile with $(INCLUDE_DIR) removed from stack_gtk.props, it's redundant and opens 2 folders on #include, and update include dirs


* TOP TROUBLES:
	* crypto++ x86 build - linker errors - temporary fix: only static build
	* GTK+ release build x64, debug x32, demo app missing system icons
	* boost debugging symbols
	* fontconfig
	* readline - unresolved external symbols
	* gstreamer(mm) build
	* gendef does not work for C code on x64 configurations - temporary fix: x64 configuration either have their own def file or no def file. denef is not used.
	* gtkmm gendef does not work as expected, def files need to be modified ( possible cause, bad control over def files and gendef)
	* boost threading does not work.
    
    * SOLVED:
	* gtkmm with atkmm support - fails in atk::~implementor - temp fix: no atkmm support
    * Pango::Layout::~Layout() access violation reading location when created with Gtk::Widget::create_pango_layout
    * test compile entry gtkmm stack with /vd2 flag, test dynamic_cast operator afterwards, see: 
    https://mail.gnome.org/archives/gtkmm-list/2014-September/msg00025.html
    http://stackoverflow.com/questions/8447799/how-can-i-workaround-this-visual-studio-compiler-bug

**LOW PRIORITY TASKS**

* some test projects depend on depracated API (goocanvasmm) gtkmm should be built with deprecated API's and the manualy define DEPRECATED API's for other projects
* test project probably do not need DISABLE_DEPRECATED macros, since project level property sheet defines that( edit: removed)
* configure remaining install projects to install documentation
* clean cmd line entries
* create master solution
* test GL extensions with cairo.
* create master config.h for all solutions and solution level config.h headers
* sincronyze compiler/linker flags for custom build cmd projects, and configuration files.
* minimize amount of build events in project to reduce the "cmd exit = blah" (edit: check for existence of dependent dlls or libs, command fails if there is project build failed)
* check inheritance consitency of all projects
* link asm outputs automatically to linker instead of object files.
* check linker library inputs because some properties added new linker inputs, no need to specify an input 2 times.
* some configurations (different) should install different headers, chaeck install projects.
* set linker /IGNORE and reenable treat linker warnings as errors in some solutions (glib...)
* instead on manualy entering linker inputs for each project there should be something like "consume" or "use" properties for each solution
* edit solution and project versions
* not all projects follow design rules
* check references, all need to have "same" settings. ie. copy local etc...
* check inclusion of headers.
* not all projects have /Zi flag set (sellect them all to quickly see the "different options"
* searching projects folder, it turns out there are a lot of pdb files, check if any project is miscofingured about symobls
* check pdb output names when building both lib and dll in same solution
* make static runtime/CRT link configurations and ARM configuration (hint: solution props inherit "threading" property sheet)
* make use of export libraries.
* check which projects output random files and update gitignore
* properties for (exe's), samples..., same as for test and tools projects for separate directory (edit: these have problems locating dependent files in root directory)
* make GtkSourceView solution, (proposed on gtkmm-list)
* make *.pc files for all solutions, so that configuration (if any) goes smooth (edit: requires all other todos, hint: project_pkg-config.props for all projects that output libs/dlls).
* describe properties into some readme, their function etc.
* create "user" properties for end use, to avoid default properties used for compilation.
* see changelog about properties and consider addings back some flags to debug configurations only.
* more template projects (ex. GTK+, ICU ..., C++ templates might have unresolved externals if using C libraries because they do not link against C libs.)


**DONE - need to check again**

* define path for nasm and similar tools in properties, so that %PATH% won't be needed
* create ICU project to optionally link with harbuzz, libxml and others?? (what with expat then?)
* RETURN "TEST CALLER APP" BACK TO FFI! test with older versions!
* check for config header of each solution for consistency such as targeted widnows.
* create a new branch for most recent "unstable" builds.
* remove VC-upgrade macros and properties, and then test projects.
* create editline and readline projects
* some projects output lib files for executables (test-iconv.exe) (edit: test and tools projects, they are separated)
* some projects output pdb into both bin and symbols dir (all projects?) (edit, only debug configurations, for static libs into SYMBOLS_DIR for dlls and exe into BIN_DIR, behavior due to incremental linking and /Zi option: https://msdn.microsoft.com/en-us/library/yd4f8bd1(v=vs.90).aspx)
* project_test.props should be below solution level property, not above.
* define what solution version numbers mean
* _WINSOCK_DEPRECATED_NO_WARNINGS defined in goocanvas(mm)?? or gstreamer(mm)?? as well as in crypto++, consider moving this macro lower in property inheritance.
* use mainCRTStartup for base_windows.props and update dpendent projects (edit: test-freeglut will fail)
* try to define macro fot path, for debugger and macro for windows version
* only dll's generate a map file, check why (edit: can be set for all DLL's and exe's..., /MAP option can't be used for *.lib)
* libffi CRT linkage in x86 build - obvious in gobject - temporary fix /NODEFAULTLIB:msvcrt.lib (edit: -MDd must be defined on ./configure)
* not all links point to direct download page (GNOME projects)
* check which source files are missing and which are no longer needed in projects.
* some projects do not need configuration any more, check which one's and update readme files
* some projects create output folders within solution, chech which ones. (edit: most probably while changing solution configuration)
* fontconfig when built, gets involed into other projects, check includes.
* remove def files from all projects, use gendef
* check links in wiki and different branches, for consistency when someone takes a fork
* projects which depend on autotools should integrate MSYS2.
* projects that will download and extract sources.
* MSYS2 projects should be set to make projects, for clean, rebuild and make, not just build/make.
* property for make projects, base_make.props.


**SUSPENDED TASKS**

* DEFINE PREPROCESSOR FOR CMAKE ON CMAKE PROJECTS
* add build log file to solution from intermediate directory
* add version number to each lib/dll file.
* ran batch build for all projects and all configurations.
* new directory structure for package multi versioning.
* build all gst-* sources and dependencies (video, audio ...)
* make solution for libgw32
* add "setup" solution and root property page for base path (REPO_DIR...)
* make project level properties ( benefit: easy relocation of solutions - it will inherit all other properties, and less work to maintain flags)
* remove version numbers from project directories, easier to manage git and updates. ( or move solutions out of sources )
* project_test.props can inherit base_console.props directly (edit: test project can be window or dll base, so no)
* link glib with pcre2
