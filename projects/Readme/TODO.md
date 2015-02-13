```
Following TODO's apply to "Redesign" branch of projects that exist in master
```
1. DEFINE PREPROCESSOR FOR CMAKE ON CMAKE PROJECTS
2. inherit output directory in projects with "non standard" configurations
3. link glib with external pcre DLL/lib version
4. finish output for libepoxy projects
5. clean cmd line entries
6. set startup projects for debug
7. test GL extensions with cairo.
8. remove NDEBUG macro for release builds, also check other macros.
9. set LTCG flag for release projects on general tab
10. prefix for solution level properties (ie. solution_"solution-name".props)
11. sincronyze compiler/linker flags for custom build cmd projects.
12. minimize amount of build events in project to reduce the "cmd exit = blah"
13. add version number to each lib/dll file.
14. project specific property sheet for purpose of relocatable solutions!
15. add missing projects to existing solutions (test projects, different versions...)
15. add general "shared" readme file into each solution.
16. need to remove lib inputs to static libraries and re-enable thread lib warning as errors!
17. ran batch build for all projects and all configurations.
18. CHECK if assembly modules require command line option about target and debug.
19. new directory structure for multi versioning.
20. same intermediate root directory for asm and C/C++ projects
21. optimize warning levels for all project to reduce warning spamming.
22. build pcre 16 and 8 versions, both lib and dll.
23. link asm automatically to linker instead of object files.
24. define database of *.def files and their standard install location.
25. add download location for project sources into solution readme.
26. solution for libgw32
27. link fontconfig custom dirnet to dirnet project
28. create ICU project to optionally link with harbuzz