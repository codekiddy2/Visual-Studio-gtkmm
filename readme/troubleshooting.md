
**A LIST OF POSSIBLE ERRORS AND HOW TO FIX THEM**

1. error: The application was unable to start correctly (0xc000007b)
	1. 32 bit application is loading 64 bit DLL or vice versa.
		1. check you PATH settings
		2. check debugging environment.


2. error: compiler can't find include file (ex. filename.h)
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
	7. more info at:
		1. https://msdn.microsoft.com/query/dev14.query?appId=Dev14IDEF1&l=EN-US&k=k(C1083)&rd=true
		2. https://msdn.microsoft.com/en-us/library/36k2cdd4(v=vs.140).aspx


**More info**

You can read more 'readme' files in:

	D:\Github\Visual-Studio-gtkmm\Readme
	
Use Visual studio Code, it has nice syntax
highlighting and allows you browse repository quickly.

Also you'll be able to read any kind of files including editing projects,
as well as files which can't be normaly read by using Windows notepad.