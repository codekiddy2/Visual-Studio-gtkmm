
**A LIST OF POSSIBLE ERRORS AND HOW TO FIX THEM**

>NOTE:

	This file assumes you have applied steps mentioned in "fundamental.md"
	if still things don't work this list here might help resolve the issue.


**1. error: The application was unable to start correctly (ex. 0xc000007b)**

	1. 32 bit application is loading 64 bit DLL or vice versa.
		1. check you PATH settings
		2. check debugging environment.
	2. application can't find dll
		1. check system PATH settings.
		2. check debugging environment.
		3. check active solution configuration corresponds to PATH / debugger setup


**2. error: compiler can't find include file (ex. filename.h)**

	1. first check $(SRC_DIR) macro is set to correct source package
	2. check "Additional include directories" are pointing compiler to correct place
	3. depending on include directive in source file, compiler search in done in following order:
		1. header file name that is enclosed by quotation marks (ex. #include "filename.h")
			1. If the quotation marks contain an absolute path, the compiler only looks for the file at that location
			2. If the quotation marks contain a relative path, the compiler looks for the file in the directory relative to the source directory
				1. In the same directory as the file that contains the #include statement.
				2. In the directories of the currently opened include files, in the reverse order in which they were opened. The search begins in the directory of the parent include file and continues upward through the directories of any grandparent include files.
				3. Along the path that's specified by each /I compiler option.
				4. Along the paths that are specified by the INCLUDE environment variable.
		2. header file name that is enclosed by angle brackets (ex. #include `<filename.h>`)
			1. Along the path that's specified by each /I compiler option.
			2. When compiling occurs on the command line, along the paths that are specified by the INCLUDE environment variable.
	4. to show includes, set Project Settings -> Configuration Properties -> C/C++ -> Advanced -> Show Includes
	5. check if there is no /X compiler option, which can be used to exclude directories from the include file search path
	6. The name of a file may be mistyped, check if there is a typo.
	7. list of directories specified in property pages under "C/C++ > Additional include directories" is performed in following order
		1. list of directories in single property page is searched from top to bottom
		2. list of directories specified in project property page directly will be searched first
		3. list of directories from child properties are *apended* to parent property page
	8. a *portion* of the information above was extracted from here:
		1. https://msdn.microsoft.com/query/dev14.query?appId=Dev14IDEF1&l=EN-US&k=k(C1083)&rd=true
		2. https://msdn.microsoft.com/en-us/library/36k2cdd4(v=vs.140).aspx

**3. error: unresolved external symbol (ex. ?allocate@?$allocator@D@std@@QEAAPEAD_K@Z )**

	1. if compiling glibmm, atkmm, pangomm, cairomm, gtkmm, goocanvasmm or gstreamermm
		1. turn off: Common properties > Genearl > Whole program optimization
		2. inherit: Common properties > C/C++ > Optimization > Whole program optimization
		3. inherit: Common properties > Linker > Optimization > Link time code generation
		4. clear: common properties > Linker > General > Link status
	2. check linker input in Common properties > Linker > input > additional dependencies
	3. check if preprocessor macro is needed to indicate DLL / static build (macro name... ??)
	4. check if all needed source files are included into project from source tree.
	5. check if already included source files aren't excluded from build in file's property page in solution explorer.
	6. check if included source files should be excluded instead, (ex. depends on library which you do not have).
	7. if project depends on definition file, check their contents (possibly comment out symbol in *.def file)
	8. check if definition file is missing
	9. clean solution, then rebuild (GTK+ solution is an example for this issue with broadway libs)
	9. check macros in source files to see macro conditions.
	10. copy paste unresolved symbol into google.


**4. error: linker can't open input file (ex. somelib.lib)**

	1. check library search directory in Common properties > Linker > General > Additional library directories
	2. in project that builds missing library check Common properties > Linker > Advanced > import library
	3. check active solution configuration and platform are correct and that all projects target same solution configuration
	4. check if input file name is mistyped in Common properties > Linker > input > additional dependencies

**5. Gdk-ERROR **: _gdk_visual_init: unsupported BITSPIXEL: 0**

	* GTK+ and cairo must be compiled without whole program optimization
	* LTCG flag must be turned off
	* LTCG link status should be turned off as well

**6. The command "some command" exited with code "some code"**

	* check if custom build step or build event begins with " set path=$(BIN_DIR);%path%" "
	* check if command contains valid paths
	* check for typos in command line
	* if command line executes external toll, consult usage documentation for external tool.


**7. My problem is not listed here**

You can read more 'readme' files in:

	D:\Github\Visual-Studio-gtkmm\Readme
	
Use Visual studio Code, it has nice syntax
highlighting and allows you browse repository quickly.

Also you'll be able to read any kind of files including editing projects,
as well as files which can't be normaly read by using Windows notepad.

If none of the information so far helps, you have several options left:

1. Open an issue on: https://github.com/codekiddy2/Visual-Studio-gtkmm/issues
2. Ask for help on forums which discus build process
3. Ask google for help.
