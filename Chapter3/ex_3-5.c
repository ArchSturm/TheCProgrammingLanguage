/* write the function itob(n, s, b) that converts the integer n into a base b
   character representation in the string s. */

#include <stdio.h>
#include <string.h>

#define MAX 33

void itob(int n, char s[], int b);
void reverse(char s[]);

int main() {
    int n = 255;
    int b = 2;

    char s[MAX];
    itob(n, s, b);
    printf("Integer: %i\n", n);
    printf("Base %i: %s\n", b, s);
}

void itob(int n, char s[], int b) {
    int i, sign;

    if ((sign = n) < 0) {
        n = -n;
    }

    i = 0;
    do {
        s[i++] = ((n % b) < 10) ? (n % b + '0') : (n % b + 'A' - 10);
    } while ((n /= b) != 0);

    if (sign < 0) {
        s[i++] = '-';
    }
    s[i] = '\0';
    reverse(s);
}

void reverse(char s[]) {
    int c, i, j;

    for (i = 0, j = strlen(s) - 1; i < j; i++, j--) {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}
