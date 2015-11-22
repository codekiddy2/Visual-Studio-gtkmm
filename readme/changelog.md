"stack wide" Changelog which applies to all projects...

/VERBOSE:LIB removed from "base_stack.props"

/NOLOGO set for linker

added ignore w4311 to base_stack (apearing mostly in gtk+, seen elsewhere?)

"Use full paths" set to "no" in base_stack.props.

Whole program optimization and LTCG turn off for all configurations:
		1. turn off: Common properties > Genearl > Whole program optimization
		2. inherit: Common properties > C/C++ > Optimization > Whole program optimization
		3. inherit: Common properties > Linker > Optimization > Link time code generation
		4. clear: common properties > Linker > General > LTCG status in base_release.props
		
http://blogs.msdn.com/b/vcblog/archive/2009/02/24/quick-tips-on-using-whole-program-optimization.aspx

