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

appending macros to include directories accross all projects for finer inclusion control.


warnings: (adding to stack_gtk.props, base_setup should be left alone, settings there are from msvc_recommended_pragmas.h ? )
added ignore warning 4311, 4133 to stack_gtk.props (apearing mostly in gtk+, seen elsewhere?)
added threat as error 4129 to stack_gtk.props

**Warnings**

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
	4003				not enough actual parameters for macro
	4013				'function' undefined; assuming extern returning int
	4020				too many actual parameters
	4021				too few actual parameters
	4027				function declared without formal parameter list
	4029				declared formal parameter list different from definition
	4033				'function' must return a value
	4035				'function' : no return value
	4045				array bounds overflow
	4047				different levels of indirection
	4049				terminating line number emission
	4053				An expression of type void was used as an operand
	4071				no function prototype given
	4150	(level 2)	deletion of pointer to incomplete type 'type'; no destructor called
	4819	(level 1)	The file contains a character that cannot be represented in the current code page (number).
	4530	(level 1)	C++ exception handler used, but unwind semantics are not enabled. Specify /EHsc

stack_gtk+.props

	4129	(level 1)	'character' : unrecognized character escape sequence