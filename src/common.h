#ifndef COMMON_H
#define COMMON_H

#include "config.h"

void say(const char *str);

#if defined(DEBUG_ENABLED)
void debug(void);
#else
static inline void debug(void) {}
#endif

#endif
