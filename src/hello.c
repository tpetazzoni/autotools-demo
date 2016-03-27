#include <dlfcn.h>
#include "common.h"

int main(void)
{
	void *lib;
	say("Hello World");
	debug();
	lib = dlopen("foo.so", RTLD_NOW);
	return 0;
}
