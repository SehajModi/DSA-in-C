// Problem: reverse an array in place.
// Insight: swap a[i] with a[n-1-i] for i < n/2.
#include <stdio.h>

void reverse(int a[], int n) {
    for (int i = 0; i < n / 2; i++) {
        int c = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = c;
    }
}

void print_array(int a[], int n) {
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");
}

int main(void) {
    int a[] = {1, 2, 3, 4, 5};
    int b[] = {1, 2, 3, 4};
    int c[] = {7};
    reverse(a, 5); print_array(a, 5);   // 5 4 3 2 1
    reverse(b, 4); print_array(b, 4);   // 4 3 2 1
    reverse(c, 1); print_array(c, 1);   // 7
    return 0;
}