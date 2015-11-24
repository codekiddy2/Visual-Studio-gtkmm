**"stack wide" Changelog / status which applies to all projects...**

/VERBOSE:LIB removed from "base_stack.props"

/NOLOGO set for linker in "base_stack.props"

"Use full paths" set to "no" in base_stack.props.

Whole program optimization and LTCG turn off for all configurations:

		1. turn off: Common properties > Genearl > Whole program optimization
		2. inherit: Common properties > C/C++ > Optimization > Whole program optimization
		3. inherit: Common properties > Linker > Optimization > Link time code generation
		4. clear: common properties > Linker > General > LTCG status in base_release.props
		
http://blogs.msdn.com/b/vcblog/archive/2009/02/24/quick-tips-on-using-whole-program-optimization.aspx

set /NOLOGO for compiler in "base_stack.props"
set /NOLOGO for librarian in "base_stack.props"

appending macros to "Additional include directories" accross all projects for finer inclusion control.


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