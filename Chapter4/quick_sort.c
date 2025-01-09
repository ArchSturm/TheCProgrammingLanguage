
// swaps v[i] and v[j]
void swap(int v[], int i, int j) {
    int temp;

    temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}

void quick_sort(int v[], int left, int right) {
    int i, last;

    if (left >= right) {
        return;
    }

    swap(v, left, (left + right) / 2);
    last = left;
    for (i = left + 1; i <= right; i++) {
        if (v[i] < v[left]) {
            swap(v, ++last, i);
        }
    }
    swap(v, left, last);
    quick_sort(v, left, last - 1);
    quick_sort(v, last + 1, right);
}

#include <stdio.h>

int main() {
    int arr[] = {3, 5, 4, 7, 1, 8, 9, 0, 2, 6};

    quick_sort(arr, 0, 9);

    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
}