#define ALLOCSIZE 10000

static char allocbuf[ALLOCSIZE]; // storage for alloc
static char *allocp = allocbuf;  // next free position

char *alloc(int n) {                          // return poiter to n characters
    if (allocbuf + ALLOCSIZE - allocp >= n) { // it fits
        allocp += n;
        return allocp - n; // old p
    } else {               // doesn't fit
        return 0;
    }
}

void afree(char *p) { // free storage poited to by p
    if (p >= allocbuf && p < allocbuf + ALLOCSIZE) {
        allocp = p;
    }
}