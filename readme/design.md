```
Design rules
```

>/* DIRECTORES */

1. Working directory (repository) = D:\GitHub\Visual-Studio-gtkmm\
2. Projects directory = <Working directory>\projects\
3. Properties directory = <Working directory>\properties\


>/* PROPERTIES */

4. All properties inherit other properties in certain order, as shown in the image on wiki > properties
5. Each solution should have it's own property page for specific solution level edits, other properties must not be changed.
6. Project settings can be changed/overriden only if solution level setting does not apply to all projects within solution.


>/* PROJECT FILES */

8. Solution/project is not finished if it does not pass successful build of all configurations.
9. Each solution should contain an "install project" to install both headers and documentation.
10. Each solution must contain a readme in separate Sulution filter named "Readme" with following entries in following order:
	COPYRIGHT
	INFO
	DEPENDENCIES
	INSTRUCTIONS
	NOTES
	TESTINGS
	TODO
11. there should be no warning outputs while opening a solution, also hidden properties and paths must be removed by using xml editor.
12. source files should be sorted by using project filters: Header Files, Source Files, Module Files and Resource Files...
12. project configurations should be named like so:
	dll configuration: Debug dll | Release dll
	lib configuration: Release dll | Release static
	discrepancy only for specific needs.


>/* OUTPUT FILES */

14. following naming convention:
	<output name>*.lib     (static library)
	<output name>*.dll.lib (import library)
	<output name>*.dll.exp (export library)
	<output name>*.dll     (shared library)

>/* SOLUTION */

15. solution should be set to start one (only) of the test projects on debug