**"stack wide" Changelog / status which applies to all projects...**


**PROPERTIES CHANGES**

/VERBOSE:LIB removed from "base_stack.props"

/NOLOGO set for linker in "base_stack.props"

"Use full paths" set to "no" in base_stack.props.

Whole program optimization and LTCG turn off for all configurations:

		1. turn off: Common properties > Genearl > Whole program optimization
		2. inherit: Common properties > C/C++ > Optimization > Whole program optimization
		3. inherit: Common properties > Linker > Optimization > Link time code generation
		4. clear: common properties > Linker > General > LTCG status in base_release.props
		5. clear: common properties > librarian > Genear > Link Time Code Generation
		
		
http://blogs.msdn.com/b/vcblog/archive/2009/02/24/quick-tips-on-using-whole-program-optimization.aspx

set /NOLOGO for compiler in "base_stack.props"
set /NOLOGO for librarian in "base_stack.props"

appending macros to "Additional include directories" accross all projects for finer inclusion control.

setting all project to use multibyte character set

set to no: common properties > resources > suppress startup banner base_stack.props
set to no: common properties > resources > show progress base_stack.props

all LIB search paths moved from stack_gtk+ to base_stack.

turn off SDL checks for all projects in base_stack.props
turn off /MAP for dll's in base_dll.props, base_stack.props now controls /MAP option which if off.
turn off /MAP:EXPORTS for dll's same as above
linker > generate debug info changed from "true" to builtin /DEBUG in base_debug/release.props set to no in base_setup.props

SDL check removed from solution level properties (set to inherit, it was off):
crypto++
icu
iconv
editline
tiff
xz
glib
pixman
cairo
goocanvas
glibmm
atkmm


added /safeseh flag to zlib's asm files, x86 builds must now all have /SAFESEH reenabled
added command to base_dll.props to auto collect symbols and save them into $(SYMBOLS_DIR), also output will be used as a def file for all dll's.
added /IGNORE:4221 to librarian in base_lib.props (this object does not defeine any previously blah symbols) safe to ignore for all libs.

**Compiler warnings**

added ignore warning 4311, 4133 to stack_gtk+.props (apearing mostly in gtk+ ?)
added treat as error 4129 to stack_gtk.props
 
>Ignored warnigs:

base_stack.props

	4101	(level 3)	'identifier' : unreferenced local variable
	4244	(level 3,4)	'conversion' conversion from 'type1' to 'type2', possible loss of data
	4305	(level 1)	'identifier' : truncation from 'type1' to 'type2'
	
stack_gtk+.props

	4311	(level 1)	'variable' : pointer truncation from 'type' to 'type'
	4133	(level 3)	'type' : incompatible types - from 'type1' to 'type2'


>Warnings treated as error:

base_stack.props

	4098	(level 1)	'function' : void function returning a value
	4002	(level 1)	too many actual parameters for macro 'identifier'
	4003	(level 1)	not enough actual parameters for macro 'identifier'
	4013	(level 3)	'function' undefined; assuming extern returning int
	4020	(level 1)	'function' : too many actual parameters
	4021	(level 1)	'function' : too few actual parameters
	4027	(level 1)	function declared without formal parameter list
	4029	(level 1)	declared formal parameter list different from definition
	4033	(level 1)	'function' must return a value
	4035	(level 3)	'function' : no return value
	4045	(level 1)	'array' : array bounds overflow
	4047	(level 1)	'operator' : 'identifier1' differs in levels of indirection from 'identifier2'
	4049	(level 1)	compiler limit : terminating line number emission
	4053	(level 4)	The ?: operator is given an expression of type void. The value of the void operand is undefined.
	4071	(level 2)	'function' : no function prototype given
	4150	(level 2)	deletion of pointer to incomplete type 'type'; no destructor called
	4819	(level 1)	The file contains a character that cannot be represented in the current code page (number).
	4530	(level 1)	C++ exception handler used, but unwind semantics are not enabled. Specify /EHsc

stack_gtk+.props

	4129	(level 1)	'character' : unrecognized character escape sequence
	
>group of warnings ignored with macros

	_CRT_NONSTDC_NO_WARNINGS	The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name
	_CRT_SECURE_NO_WARNINGS		C4996 This function or variable may be unsafe. Consider using safe_version instead
	_SCL_SECURE_NO_WARNINGS		Function call with parameters that may be unsafe - this call relies on the caller to check that the passed values are correct.
	_CRT_OBSOLETE_NO_WARNINGS	This function or variable has been superceded by newer library or operating system functionality. Consider using new_item instead
	_CRT_SECURE_NO_DEPRECATE
	_CRT_NONSTDC_NO_DEPRECATE
	_WINSOCK_DEPRECATED_NO_WARNINGS
	
	https://msdn.microsoft.com/query/dev14.query?appId=Dev14IDEF1&l=EN-US&k=k(C4996)&rd=true
	
>candidates for "treat as error"

	4273	(level 1)	'function' : inconsistent DLL linkage
	
>candidates for "ignore" (edit: see ignored in different projects and solutions)

	4018	(level 3)	'expression' : signed/unsigned mismatch
	4312	(level 1)	'operation' : conversion from 'type1' to 'type2' of greater size
	4275	(level 2)	non – DLL-interface classkey 'identifier' used as base for DLL-interface classkey 'identifier'


**NOTES**

Enable enhanced instruction set

Because the x86 compiler generates code that uses SSE2 instructions by default,
you must specify /arch:IA32 to disable generation of SSE and SSE2 instructions for x86 processors.


/D flag on command line

By default, the value associated with a symbol is 1. For example, /Dname is equivalent to /Dname=1


Debugger: Working Directory (relative paths in sources are according to "Working directory")
Specifies the working directory of the program being debugged,
relative to the project directory where your EXE is located.
If you leave this blank, the working directory is the project directory.
