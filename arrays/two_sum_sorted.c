// Problem: in a sorted array, find two numbers that add up to the target.
// Insight: left at start, right at end. Sum too big -> right--, too small -> left++.
#include <stdio.h>

void two_sum(int a[], int n, int t) {
    int left = 0, right = n - 1;
    while (left < right) {
        int sum = a[left] + a[right];
        if (sum == t) {
            printf("found: %d %d\n", left, right);
            return;
        } else if (sum > t) {
            right--;
        } else {
            left++;
        }
    }
    printf("not found\n");
}

int main(void) {
    int a[] = {1, 2, 4, 7, 11, 15};
    int b[] = {2, 3, 4};
    int c[] = {1, 2, 3};
    int d[] = {3, 3};
    two_sum(a, 6, 9);    // found: 1 3
    two_sum(b, 3, 6);    // found: 0 2
    two_sum(c, 3, 10);   // not found
    two_sum(d, 2, 6);    // found: 0 1
    return 0;
}