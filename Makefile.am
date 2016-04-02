bin_PROGRAMS = hello bonjour
hello_SOURCES = src/hello.c src/say.c src/common.h
bonjour_SOURCES = src/bonjour.c src/say.c src/common.h
if DEBUG_ENABLED
lib_LTLIBRARIES = libdemo.la
libdemo_la_SOURCES = lib/debug.c
libdemo_la_LDFLAGS = -version-info 0:0:0
endif
doc_DATA = README
