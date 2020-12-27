#include <stdio.h>

#include "example_lib.h"

int main(void)
{
    printf("Hello world!\n");
    printf(EXAMPLE_TEXT);

#ifdef EXAMPLE_DEFINE
    printf("Hello from ifdef!\n");
#endif

    return 0;
}
