#include <dlfcn.h>
#include <curl/curl.h>
#include "common.h"

int main(void)
{
	void *lib;
	CURL *c;
	say("Hello World");
	lib = dlopen("foo.so", RTLD_NOW);
	c = curl_easy_init();
	return 0;
}
