#include <stdio.h>
#include "common.h"
#include "config.h"

void say(const char *str)
{
#if defined(HAVE_PRINTF)
	printf("%s says: '%s'\n", PACKAGE_STRING, str);
#else
	puts("Printing disabled");
#endif
}
