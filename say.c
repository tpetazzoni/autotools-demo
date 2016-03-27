#include <stdio.h>
#include "common.h"
#include "config.h"

void say(const char *str)
{
	printf("%s says: '%s'\n", PACKAGE_STRING, str);
}
