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
    if (d == -1) {
        printf("Invalid format");
        return 1;
    }
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
    int i = 0;

    for (i; h[i] != '\0'; i++) {
        h[i] = tolower(h[i]);
    }

    int converter(char h[], int i) {
        int d = 0;
        for (i; h[i] != '\0'; i++) {
            if (h[i] >= '0' && h[i] <= '9') {
                d = d * 16 + (h[i] - '0');
            } else if (h[i] >= 'a' && h[i] <= 'f') {
                d = d * 16 + (h[i] - 'a' + 10);
            } else {
                return -1;
            }
        }
        return d;
    }

    if (h[0] == '0' && h[1] == 'x') {
        return converter(h, 2);
    } else {
        return converter(h, 0);
    }
}