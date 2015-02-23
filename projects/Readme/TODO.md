```
Following TODO's apply to "Redesign" branch
```
1. DEFINE PREPROCESSOR FOR CMAKE ON CMAKE PROJECTS
2. add build log file to solution from inermediate directory
3. link glib with external pcre DLL/lib version
4. configure install projects to install documentation
5. clean cmd line entries
6. create master solution
7. test GL extensions with cairo.
8. use mainCRTStartup for base_windows.props and update dpendent projects
9. where is gtk-update-iconcache.exe?? and other tools to "prepare" GTK+
10. separate each project into it's own folder in solution directory
11. sincronyze compiler/linker flags for custom build cmd projects.
12. minimize amount of build events in project to reduce the "cmd exit = blah"
13. add version number to each lib/dll file.
14. move all solutions to root directory
15. add missing projects to existing solutions (test projects, different versions...)
15. add general "shared" readme file into each solution.
16. some project do not need configuration any more, check which one and update readme files
17. ran batch build for all projects and all configurations.
18. check inheritance consitency of all projects
19. new directory structure for multi versioning.
20. same intermediate root directory for asm and C/C++ projects
21. define location for *.def files in solution folder, and how to "install" them into SYMBOLS_DIR
22. build pcre 16 and 8 versions, both lib and dll.
23. link asm outputs automatically to linker instead of object files.
24. define path for nasm and similar tools in properties, so that %PATH% won't be needed
25. merge TODO's from readme files here
26. solution for libgw32
27. rename projects so that the name is the same as in solutions
28. create ICU project to optionally link with harbuzz
29. RETURN "TEST CALLER APP" BACK TO FFI! test with older versions!
30. check for config header for consistency such as targeted widnows.
31. rename gtk_stack.props into stack_gtk.props and update projects
32. add "setup" solution and root property page for base path (REPO_DIR...)
33. move readme folder into root of repository
34. create a new branch for most recent "unstable" builds, and get rid of "old" folder.
35. create "user" properties for end use.
36. remove VC-upgrade macros and properties, and then test projects.
37. implement custom *.pc files for pkg-config
38. check linker library inputs because some properties added new linker inputs, no need to specify an input 2 times.