
/* write a program detab that replaces tabs in the input with the proper number
   of blanks to space to the next tab stop. Assume a fixed set of tab stops, say
   every n columns. Should n be a variable or a symbolic parameter? */

#include <stdio.h>

#define TAB 4
#define MAX 10000

int main() {
    int c = 0;
    int i = 0;
    char s[MAX];
    while (i < (MAX - 1) && (c = getchar()) != EOF) {
        if (c == '\t') {
            for (int j = i; i < (MAX - 1) && i < (j + TAB); i++) {
                s[i] = ' ';
            }
        } else {
            s[i] = c;
            i++;
        }
    }
    s[i] = '\0';
    for (i = 0; s[i] != '\0'; i++) {
        printf("%c", s[i]);
    }
    return 0;
}