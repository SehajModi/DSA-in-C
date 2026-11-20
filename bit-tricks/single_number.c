// Problem: every number appears twice except one; find it.
// Insight: a ^ a = 0, a ^ 0 = a, order doesn't matter.
#include <stdio.h>

int single_number(int arr[], int n) {
    int result = 0;
    for (int i = 0; i < n; i++) {
        result ^= arr[i];
    }
    return result;
}

int main(void) {
    int a[] = {4, 1, 2, 1, 2};
    int b[] = {7, 3, 7};
    int c[] = {9};
    printf("%d\n", single_number(a, 5));   // 4
    printf("%d\n", single_number(b, 3));   // 3
    printf("%d\n", single_number(c, 1));   // 9
    return 0;
}