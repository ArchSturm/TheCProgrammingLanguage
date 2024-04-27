#include <stdio.h>

int main()
{
    // Write a program to copy its input to its output, replacing each tab by \t, each backspace by \b (there is no \b lol), and each backslash by \\. This makes tabs and backspaces visible in an unambiguous way.
    int c;
    int n = 0;
    int t = 0;
    int b = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
        {
            printf("\\n");
            n++;
        }
        else if (c == '\t')
        {
            printf("\\t");
            t++;
        }
        else if (c == '\b')
        {
            printf("\\b");
            b++;
        }
        else if (c == ' ')
        {
            printf("\\s");
            b++;
        }
        else
        {
            putchar(c);
        }
    }
    printf("\nn = %i, t = %i, b = %i\n", n, t, b);
}