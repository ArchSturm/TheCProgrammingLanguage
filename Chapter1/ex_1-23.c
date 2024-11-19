
/* write a program to remove all comments from a C program. Don't forget to
   handle quoted strings and character constants properly. C comments do not
   nest. */

#include <stdio.h>

#define MAX 10000
#define IN 1  /* inside a string */
#define OUT 0 /* outside a string */

int main() {
    int c = 0, i = 0, lastc = EOF, state = OUT;
    char s[MAX];
    while (i < (MAX - 1) && (c = getchar()) != EOF) {
        if (c == '"' && state == OUT) {
            state = IN;
        } else if (c == '"' && state == IN) {
            state = OUT;
        }
        if (((c == '/') && (lastc == c)) && state == OUT) {
            i--;
            while (((c = getchar()) != '\n') && (c != EOF)) {
                lastc = c; // test
            }
            s[i] = '\n'; // test /* test */ /* "test"  // "test" */
            i++;
        } else if (((c == '*') && (lastc == '/')) && state == OUT) {
            i--;
            while (((c = getchar()) != '/') && (lastc != '*')) {
                lastc = c; /* test */ // test
            }
        } else {
            s[i] = c; // test /* test */ // test // "test"
            i++;
        }
        lastc = c;
    }
    s[i] = '\0';
    for (i = 0; s[i] != '\0'; i++) {
        printf("%c", s[i]);
    }
    printf("//test");
    return 0;
}