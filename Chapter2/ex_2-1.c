
/* write a program to determine the ranges of char, short, int, and long
   variables, both signed and unsigned, by printing appropriate values from
   standard headers and by direct computation. Harder if you compute them:
   determine the ranges of the various floating-point types. */

#include <float.h>
#include <limits.h>
#include <stdio.h>

int main() {
    printf("Ranges from standard headers:\n");
    printf("UCHAR_MAX: %u\n", UCHAR_MAX);
    printf("USHRT_MAX: %u\n", USHRT_MAX);
    printf("UINT_MAX: %u\n", UINT_MAX);
    printf("ULONG_MAX: %lu\n", ULONG_MAX);

    printf("\nRanges by direct computation:\n");
    int i = 0;
    while (i >= 0)
        i++;
    printf("INT_MIN: %d\n", i);
    i = 0;
    while (i <= 0)
        i--;
    printf("INT_MAX: %d\n", i);
}