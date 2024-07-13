#include <stdio.h>

#define MAXLINE 1000

int getline(char line[], int maxline);
void reverse(char s[], char r[], int len);

/* write a function reverse(s) that reverses the character string s.
   use it to write a program that reverses it's input a line at a time. */
int main() {
    int len;
    int max = 0;
    char line[MAXLINE];
    char reversed[MAXLINE];

    while ((len = getline(line, MAXLINE)) > 0) {
        reverse(line, reversed, len);
        printf("%s", reversed);
    }
    return 0;
}

int getline(char s[], int lim) {
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        s[i] = c;
    }
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

void reverse(char s[], char r[], int len) {
    int j = len - 1;
    r[len] = s[len];
    for (int i = 0; i < len; ++i) {
        r[j] = s[i];
        --j;
    }
}

/*

1 2\n\0
\n2 1\0
0 1 2 3

len = 3
j = 2

*/