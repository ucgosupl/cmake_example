#include <stdio.h>

#include "version.h"

#define STRINGIFY1(a)    #a
#define STRINGIFY(a)     STRINGIFY1(a)

int main(void)
{
    printf(STRINGIFY(VERSION_STRING));
    printf("\n%d.%d.%d\n", VERSION_MAJOR, VERSION_MINOR, VERSION_PATCH);

    printf(STRINGIFY(COMPILER_ID));
    printf("\n");
    printf(STRINGIFY(COMPILER));
    printf("\n");

    return 0;
}