// Problem: is n a power of two?
// Insight: powers of two have one 1-bit, so n & (n-1) == 0. Exclude n = 0.
#include <stdio.h>
#include <stdint.h>

int is_pow2(uint32_t n) {
    return n != 0 && (n & (n - 1)) == 0;
}

int main(void) {
    printf("%d\n", is_pow2(16));   // 1
    printf("%d\n", is_pow2(18));   // 0
    printf("%d\n", is_pow2(1));    // 1
    printf("%d\n", is_pow2(0));    // 0
    printf("%d\n", is_pow2(64));   // 1
    return 0;
}