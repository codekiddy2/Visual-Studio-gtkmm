1. DEFINE PREPROCESSOR FOR CMAKE ON CMAKE PROJECTS
2. build ffi DLL version
3. link glib with external pcre DLL/lib version
4. finish output for libepoxy projects
5. clean cmd line entries
6. set startup projects for debug
7. fix zlib x86
8. remove NDEBUG macro for release builds, also check other macros.
9. dummy projects shall not create intermediates.
10. debug x64 outputs pdb files into wrong location.
11. sincronyze compiler/linker flags for custom build cmd projects.
12. minimize amount of build events in project to reduce the "cmd exit = blah"
13. add version number to each lib/dll file.
14. project specific property sheet for purpose of relocatable solutions!
15. add missing projects to existing solutions (test projects, different versions...)
15. add general "shared" readme file into each solution.
16. reduce amount of properties in glib solution.
17. ran batch build for all projects and all configurations.
18. CHECK if assembly modules require command line option about target and debug.
19. libffi Debug x86 unresolved stuff.
20. same intermediate root directory for asm and C/C++ projects