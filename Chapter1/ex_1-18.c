#include <stdio.h>

#define MAXLINE 1000

int getline(char line[], int maxline);
int clear(char s[], int len);

// write a program that removes trailing blanks and deletes entire blank lines.
int main() {
    int len;
    int max = 0;
    char line[MAXLINE];

    while ((len = getline(line, MAXLINE)) > 0) {
        int x = clear(line, len);
        if (x > -1) {
            printf("%s\n", line);
        }
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

int clear(char s[], int len) {
    int x = 1;
    --len;
    while (x == 1 && len >= 0) {
        if (s[len] == ' ' || s[len] == '\t' || s[len] == '\n') {
            s[len] = '\0';
            --len;
        } else {
            x = 0;
        }
    }
    return len;
}