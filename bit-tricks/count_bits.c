// Problem: count the 1-bits in n.
// Insight: n &= (n-1) removes the lowest set bit; count the removals.
#include <stdio.h>
#include <stdint.h>

int count_bits(uint32_t n) {
    int count = 0;
    while (n) {
        n &= (n - 1);
        count++;
    }
    return count;
}

int main(void) {
    printf("%d\n", count_bits(5));            // 2
    printf("%d\n", count_bits(7));            // 3
    printf("%d\n", count_bits(8));            // 1
    printf("%d\n", count_bits(0));            // 0
    printf("%d\n", count_bits(0xFFFFFFFF));   // 32
    return 0;
}