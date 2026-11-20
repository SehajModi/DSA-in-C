// Problem: move zeros to the end, keep the order of non-zeros, in place.
// Insight: i scans, j marks where the next non-zero goes.
#include <stdio.h>

void move_zeroes(int a[], int n) {
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] != 0) {
            int c = a[i];
            a[i] = a[j];
            a[j] = c;
            j++;
        }
    }
}

void print_array(int a[], int n) {
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");
}

int main(void) {
    int a[] = {0, 1, 0, 3, 12};
    int b[] = {0, 0, 1};
    int c[] = {1, 2, 3};
    int d[] = {0};
    move_zeroes(a, 5); print_array(a, 5);   // 1 3 12 0 0
    move_zeroes(b, 3); print_array(b, 3);   // 1 0 0
    move_zeroes(c, 3); print_array(c, 3);   // 1 2 3
    move_zeroes(d, 1); print_array(d, 1);   // 0
    return 0;
}