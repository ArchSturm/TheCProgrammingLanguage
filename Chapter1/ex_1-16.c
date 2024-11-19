#include <stdio.h>

#define MAXLINE 1000

int getline(char line[]);
void copy(char to[], char from[]);

// print the length of arbitralily long input lines, and as much of the text as
// possible.
int main() {
    int len;
    int max = 0;
    char line[MAXLINE];
    char longest[MAXLINE];

    while ((len = getline(line)) > 0) {
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    }
    if (max > 0) {
        printf("%s", longest);
        if (max > MAXLINE) {
            printf("\n");
        }
    }
    printf("length: %i", max);
    return 0;
}

// read a line into s, resturn length
int getline(char s[]) {
    int c, i;

    for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i) {
        s[i] = c;
    }
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

// copy from int to
void copy(char to[], char from[]) {
    int i = 0;
    while ((to[i] = from[i]) != '\0') {
        ++i;
    }
}