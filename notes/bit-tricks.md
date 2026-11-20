# Bit tricks
- Power of two: n != 0 && (n & (n-1)) == 0. Brackets matter, == binds tighter than &.
- Count set bits: n &= (n-1) removes the lowest 1-bit; count the removals.
- Single number: a ^ a = 0, a ^ 0 = a, order doesn't matter. Works only when exactly one item is unpaired.
- Use unsigned types for bit work. Test 0, 1, 0xFFFFFFFF.