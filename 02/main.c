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

    // Git data are generated when running cmake
    // CMake must be run again after every commit to update
    printf("\n");
    printf("Git commit ID: ");
    printf(STRINGIFY(GIT_COMMIT));
    printf("\n");
    printf("Git branch: ");
    printf(STRINGIFY(GIT_BRANCH));
    printf("\n");

    // Compilation date and time are not generated at CMake generation time
    // So we must use compiler predefined symbols, not CMake symbols
    printf("\n");
    printf("Compilation date: ");
    printf(__DATE__);
    printf("\n");
    printf("Compilation time: ");
    printf(__TIME__);
    printf("\n");

    return 0;
}