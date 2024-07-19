#include <stdio.h>

#define SIZE 100

int binsearch(int x, int v[], int n);

// write a binary search that only have one if inside the loop
int main() {
    int v[SIZE];
    for (int i = 0; i < SIZE; i++) {
        v[i] = i;
    }
    printf("%i", binsearch(1, v, SIZE));
    return 0;
}

int binsearch(int x, int v[], int n) {
    int low, mid, high;

    low = 0;
    high = n - 1;
    mid = (low + high) / 2;
    while ((v[mid] != x) && (mid <= high) && (mid >= low)) {
        printf("%i ", v[mid]);
        if (x < mid) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
        mid = (low + high) / 2;
    }
    if ((mid <= high) && (mid >= low)) {
        return mid;
    } else {
        return -1;
    }
}