#ifndef PRAGMA_END_HH
#define PRAGMA_END_HH

#ifdef _MSC_VER
// restore warnings for /W4
#pragma warning(pop)
// boost specific
#pragma warning(default: 4172) // lvl1 returning address of local variable or temporary
//#pragma warning(default: 4503) // lvl1 'identifier' : decorated name length exceeded, name was truncated
// re-enable warnings for /W4
#pragma warning(default: 4996) // lvl3 The compiler encountered a deprecated declaration.
// re-enable warnings for /Wall
#pragma warning(default: 4242) // lvl4 'identifier': conversion from 'type1' to 'type2', possible loss of data
#pragma warning(default: 4265) // lvl3 class has virtual functions, but destructor is not virtual

#elif defined(__GNUC__)
#pragma GCC diagnostic warning "-Wall"
#pragma GCC diagnostic warning "-Wextra"
#pragma GCC diagnostic warning "-Wpedantic"
//#pragma GCC diagnostic warning "-Weffc++"

#pragma GCC diagnostic warning "-Wcast-align"
#pragma GCC diagnostic warning "-Wcast-qual"
#pragma GCC diagnostic warning "-Wconversion"
#pragma GCC diagnostic warning "-Wdisabled-optimization"
#pragma GCC diagnostic warning "-Wfloat-equal"

#pragma GCC diagnostic warning "-Wimport"
#pragma GCC diagnostic warning "-Winline"
#pragma GCC diagnostic warning "-Wunsafe-loop-optimizations"
#pragma GCC diagnostic warning "-Wlong-long"
#pragma GCC diagnostic warning "-Wmissing-include-dirs"
#pragma GCC diagnostic warning "-Wmissing-format-attribute"
#pragma GCC diagnostic warning "-Wpacked"
#pragma GCC diagnostic warning "-Winvalid-pch"
#pragma GCC diagnostic warning "-Wmissing-noreturn"
//#pragma GCC diagnostic warning "-Wpadded"
#pragma GCC diagnostic warning "-Wpointer-arith"
#pragma GCC diagnostic warning "-Wredundant-decls"
#pragma GCC diagnostic warning "-Wshadow"
#pragma GCC diagnostic warning "-Wstack-protector"
#pragma GCC diagnostic warning "-Wswitch-default"
//#pragma GCC diagnostic warning "-Wswitch-enum"
#pragma GCC diagnostic warning "-Wunreachable-code"
#pragma GCC diagnostic warning "-Wunused"
#pragma GCC diagnostic warning "-Wvariadic-macros"
#pragma GCC diagnostic warning "-Wwrite-strings"
#pragma GCC diagnostic warning "-Wctor-dtor-privacy"
#pragma GCC diagnostic warning "-Wlogical-op"
#pragma GCC diagnostic warning "-Wold-style-cast"
#pragma GCC diagnostic warning "-Woverloaded-virtual"
//#pragma GCC diagnostic warning "-Wsign-promo"
#pragma GCC diagnostic warning "-Wstrict-null-sentinel"
#pragma GCC diagnostic warning "-Wundef"
#pragma GCC diagnostic warning "-fdiagnostics-show-option"

#pragma GCC diagnostic warning "-Wformat"
#pragma GCC diagnostic warning "-Wformat-nonliteral"
#pragma GCC diagnostic warning "-Wformat-security"
#pragma GCC diagnostic warning "-Wformat-y2k"
#pragma GCC diagnostic warning "-Wformat-signedness"

#pragma GCC diagnostic ignored "-Wswitch"
#pragma GCC diagnostic ignored "-Waggregate-return"

#endif // _MSC_VER or defined(__GNUC__)

#endif // !PRAGMA_END_HH
