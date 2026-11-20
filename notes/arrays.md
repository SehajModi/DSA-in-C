# Arrays
- Reverse in place: swap a[i] and a[n-1-i] for i < n/2.
- Move zeroes: read pointer i, write pointer j. Swap on non-zero, then j++. O(n).
- Two-sum sorted: left/right pointers; sum too big -> right--, too small -> left++. O(n).
- sizeof(arr) gives bytes; divide by sizeof(arr[0]) for the element count.

## Prefix sums
- Problem: many range-sum queries on one array.
- Insight: build p once (p[0] = 0, p[i+1] = p[i] + a[i]). Then sum(l, r) = p[r+1] - p[l]. The subtraction cancels everything before l.
- p has n+1 slots; p[i] is the sum of the first i elements.
- Cost: O(n) to build, O(1) per query, versus O(n) per query by looping.
- Pattern: precompute once, answer fast. Same idea underlies the moving average.