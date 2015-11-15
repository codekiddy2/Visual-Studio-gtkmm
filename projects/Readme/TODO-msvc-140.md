```
Following TODO's apply to "msvc-140" branch
```
1. DEFINE PREPROCESSOR FOR CMAKE ON CMAKE PROJECTS
2. add build log file to solution from inermediate directory
3. build freetype dll (see details on http://stackoverflow.com/questions/6207176/compiling-freetype-to-dll-as-opposed-to-static-library)
4. configure remaining install projects to install documentation
5. clean cmd line entries
6. create master solution
7. test GL extensions with cairo.
8. use mainCRTStartup for base_windows.props and update dpendent projects
9. create master config.h for all solutions and solution level config.h headers
[HIGH PRIORITY] 10. separate each project into it's own folder in solution directory ( it will be easy to manage gitignore file )
11. sincronyze compiler/linker flags for custom build cmd projects.
12. minimize amount of build events in project to reduce the "cmd exit = blah"
13. add version number to each lib/dll file.
[HIGH PRIORITY] 14. move all solutions into source's root directory ( make TODO 10 and 54 first! )
[HIGH PRIORITY] 15. add missing projects to existing solutions (test projects, different versions...)
[HIGH PRIORITY] 15. add general "shared" readme file into each solution.
[HIGH PRIORITY] 16. some projects do not need configuration any more, check which one's and update readme files
17. ran batch build for all projects and all configurations.
18. check inheritance consitency of all projects
[DONE?] 19. new directory structure for multi versioning. (problem with zlib cmd entries)
[HIGH PRIORITY] 20. same intermediate root directory for asm and C/C++ projects
[HIGH PRIORITY] 21. define location for *.def files in solution folder, and how to "install" them into SYMBOLS_DIR ( TODO 14 first! )
22. build all gst-* sources and dependencies (video, audio ...)
23. link asm outputs automatically to linker instead of object files.
24. define path for nasm and similar tools in properties, so that %PATH% won't be needed
[HIGH PRIORITY] 25. merge TODO's from readme files here
26. make solution for libgw32
[HIGH PRIORITY] 27. rename projects (in windows explorer) so that the name is the same as in solutions ( TODO 14 first! )
28. create ICU project to optionally link with harbuzz, libxml and others?? (what with expat then?)
29. RETURN "TEST CALLER APP" BACK TO FFI! test with older versions!
30. check for config header of each solution for consistency such as targeted widnows.
[HIGH PRIORITY] 31. rename gtk_stack.props into stack_gtk.props and update projects ( TODO 14 first )
32. add "setup" solution and root property page for base path (REPO_DIR...)
[HIGH PRIORITY] 33. move readme folder into root of repository ( TODO 14 first!)
[HIGH PRIORITY] 34. create a new branch for most recent "unstable" builds, and get rid of "old" folder.
[DONE?]35. create "user" properties for end use.
36. remove VC-upgrade macros and properties, and then test projects.
37. implement custom *.pc files for pkg-config
38. check linker library inputs because some properties added new linker inputs, no need to specify an input 2 times.
39. some configurations (different) should install different headers, chaeck install projects.
40. set linker /IGNORE and reenable threat linker warnings as errors in some solutions (glib...)
41. instead on manualy entering linker inputs for each project there should be something like "consume" or "use" properties for each solution

```
New TODO's since msvc-140
```
42. edit solution and project versions
43. create editline and readline projects
44. update wiki and give detailed info
45. define what solutino version numbers mean
46. not all projects follow design rules
47. some projects output lib files for executables (test-iconv.exe)
48. some projects output pdb into both bin and symbols dir (all projects?)
49. decide what to do with outdated projects (older versions)
50. not all links point to direct download page (GNOME projects)
51. it is possible that newer version packages have source files and headers which are not yet included in projects.
52. check references, all need to have "same" settings. ie. copy local etc...
53. describe properties into some readme, their function etc.
54. [HIGH PRIORITY] make project level properties ( benefit: easy relocation of solutions - it will inherit all other properties,  and less work to maintain flags)