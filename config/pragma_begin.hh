#ifndef PRAGMA_BEGIN_HH
#define PRAGMA_BEGIN_HH

#ifdef _MSC_VER
// disable warnings for /Wall
#pragma warning(disable: 4710) // lvl4 the compiler did not perform the inlining.
#pragma warning(disable: 4514) // lvl4 'function': unreferenced inline function has been removed
#pragma warning(disable: 4061) // lvl4 enumerator in a switch is not explicitly handled by a case label
#pragma warning(disable: 4062) // lvl4 enumerator in a switch is not handled
#pragma warning(disable: 4820) // lvl4 'bytes' bytes padding added after construct 'member_name'
#pragma warning(disable: 4242) // lvl4 'identifier': conversion from 'type1' to 'type2', possible loss of data
#pragma warning(disable: 4265) // lvl3 class has virtual functions, but destructor is not virtual
// disable warnings for /W4
#pragma warning(disable: 4250) // lvl2 'class1' : inherits 'class2::member' via dominance
#pragma warning(disable: 4996) // lvl3 The compiler encountered a deprecated declaration.
// boost specific
#pragma warning(disable: 4172) // lvl1 returning address of local variable or temporary
//#pragma warning(disable: 4503) // lvl1 'identifier' : decorated name length exceeded, name was truncated
// save warnings for /W4
#pragma warning(push, 0)
#endif // _MSC_VER

#endif // !PRAGMA_BEGIN_HH

