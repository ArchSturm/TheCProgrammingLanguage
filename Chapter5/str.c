#include <stdio.h>

#define MAXCHAR 1000

int mystrcmp(char *s, char *t);
int mystrncmp(char *s, char *t, int n);
void mystrcpy(char *s, char *t);
void mystrncpy(char *s, char *t, int n);

int main() {
    char to[MAXCHAR];
    char *from = "copy this test";

    mystrncpy(to, from, 7);
    printf("%s\n", to);

    char *cmp1 = "comp this test";
    char *cmp2 = "comp thi teste";

    int i = 0;
    if ((i = mystrcmp(cmp1, cmp2)) == 0) {
        printf("equal\n");
    } else {
        printf("differ at index %d\n", i);
    }

    i = 0;
    if ((i = mystrncmp(cmp1, cmp2, 7)) == 0) {
        printf("equal\n");
    } else {
        printf("differ at index %d\n", i);
    }
}

int mystrcmp(char *s, char *t) {
    int i = 0;
    while (*s == *t && *s != '\n') {
        s++;
        t++;
        i++;
    }
    if (*s == *t) {
        return 0;
    }
    return i;
}

int mystrncmp(char *s, char *t, int n) {
    int i = 0;
    while (*s == *t && *s != '\n' && i < n) {
        s++;
        t++;
        i++;
    }
    if (*s == *t) {
        return 0;
    }
    return i;
}

void mystrcpy(char *s, char *t) {
    while ((*s = *t) != '\0') {
        s++;
        t++;
    }
}

void mystrncpy(char *s, char *t, int n) {
    int i = 0;
    while (((*s = *t) != '\0') && i < n) {
        s++;
        t++;
        i++;
    }
    if (i == n) {
        *s = '\0';
    }
}