#include "libgnuintl.h"

/* codekiddy -> follwing is the replacement for origninal */
char *libintl_setlocale(int a, const char * b)
{
	return setlocale(a, b); // return setlocale from <locale.h>
}