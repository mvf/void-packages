#include <stdint.h>
#include <limits.h>
#include <errno.h>
#include <string.h>
#include <stdarg.h>
#include <stdbool.h>

#define _PUBLIC_
#define TALLOC_BUILD_VERSION_MAJOR 2
#define TALLOC_BUILD_VERSION_MINOR 1
#define TALLOC_BUILD_VERSION_RELEASE 14
#define MIN(x, y) ((x) < (y) ? (x) : (y))

#define HAVE_VA_COPY
