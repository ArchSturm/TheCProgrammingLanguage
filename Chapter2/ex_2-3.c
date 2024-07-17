#include <ctype.h>
#include <stdio.h>

#define MAX 10

int htoi(char h[]);
int gethex(char s[], int lim);

/* write the function htoi, which converts a string of hex digits (including an
   optional 0x or 0X) to it's equivalent integer. Alow upper and lower case */
int main() {
    char s[MAX];
    gethex(s, MAX);
    int d = htoi(s);
    printf("%i\n", d);
    return 0;
}

int gethex(char s[], int lim) {
    int c = 0;
    int i = 0;

    for (i; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++) {
        s[i] = c;
    }
    s[i] = '\0';

    return 0;
}

int htoi(char h[]) {
    int d = 0;
    int i = 0;
    char hasx = 0;

    for (i; h[i] != '\0'; i++) {
        h[i] = tolower(h[i]);
    }

    if (h[2] == 'x') {
        hasx = 1;
    }
    if (h[i] == '0' && hasx == 0 && i > 1) {
        d = d + 16;
        i--;
    } else if (h[i] == '0' && hasx == 1 && i > 3) {
        d = d + 16;
        i--;
    }

    for (i; i >= 0 && h[i] != 'x'; i--) {
        if (h[i] >= '0' && h[i] <= '9') {
            d = d * 16 + (h[i] - '0');
        } else if (h[i] >= 'a' && h[i] <= 'f') {
            d = d * 16 + (h[i] - 'a' + 10);
        }
    }
    return d;
}