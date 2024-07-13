#include <stdio.h>

#define MAXLINE 1000

int getline(char line[], int maxline);

// write a program to print all input lines that are longer that 80 characters
int main() {
    int len;
    int max = 0;
    char line[MAXLINE];

    while ((len = getline(line, MAXLINE)) > 0) {
        if (len > 80) {
            printf("%s", line);
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