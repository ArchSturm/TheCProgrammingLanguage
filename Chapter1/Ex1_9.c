#include <stdio.h>

void ex1_8();
void ex1_9();

int main() {
    // Write a program to count blanks, tabs, and newlines.
    ex1_8();

    // Write a program to copy its input to its output, replacing each string of
    // one or more blanks by a single blank.
    ex1_9();
}

void ex1_8() { printf("%i\n", EOF); }

void ex1_9() {
    int c;
    int lastc = EOF;

    while ((c = getchar()) != EOF) {
        if ((c == ' ') && (lastc == c)) {
            ;
        } else {
            putchar(c);
        }
        lastc = c;
    }
}