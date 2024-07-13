#include <stdio.h>

// Write a program that priunts its input one word per line
int main() {
    int c;
    int lastc = EOF;

    while ((c = getchar()) != EOF) {
        if (((c == ' ') || (c == '\n') || (c == '\t')) && (lastc == c)) {
            ;
        } else if (((c == ' ') || (c == '\n') || (c == '\t')) && (lastc != c)) {
            printf("\n");
        } else {
            putchar(c);
        }
        lastc = c;
    }
}