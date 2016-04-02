#include <dlfcn.h>
#include <demo.h>
#include "common.h"

int main(void)
{
	void *lib;
	say("Hello World");
#if defined(DEBUG_ENABLED)
	debug();
#endif
	lib = dlopen("foo.so", RTLD_NOW);
	return 0;
}
