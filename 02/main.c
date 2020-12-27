#include <stdio.h>

#include "version.h"

#define STRINGIFY1(a)    #a
#define STRINGIFY(a)     STRINGIFY1(a)

int main(void)
{
    printf(STRINGIFY(VERSION_STRING));
    printf("\n%d.%d.%d\n", VERSION_MAJOR, VERSION_MINOR, VERSION_PATCH);

    printf("\n");
    printf("Compiler name: ");
    printf(STRINGIFY(COMPILER_ID));
    printf("\n");
    printf("Compiler path: ");
    printf(STRINGIFY(COMPILER));
    printf("\n");

    printf("\n");
    printf("Git commit ID: ");
    printf(STRINGIFY(GIT_COMMIT));
    printf("\n");
    printf("Git branch: ");
    printf(STRINGIFY(GIT_BRANCH));
    printf("\n");

    return 0;
}