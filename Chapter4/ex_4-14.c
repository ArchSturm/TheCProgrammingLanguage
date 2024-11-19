#include <stdio.h>

// "\" at and of line to use multiple lines in a macro
#define swap(t, x, y)                                                          \
    {                                                                          \
        t temp;                                                                \
        temp = x;                                                              \
        x = y;                                                                 \
        y = temp;                                                              \
    }

int main() {
    int x = 1;
    int y = 2;

    swap(int, x, y);
    printf("x = %i, y = %i", x, y);
}