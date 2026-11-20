# Arrays
- Reverse in place: swap a[i] and a[n-1-i] for i < n/2.
- Move zeroes: read pointer i, write pointer j. Swap on non-zero, then j++. O(n).
- Two-sum sorted: left/right pointers; sum too big -> right--, too small -> left++. O(n).
- sizeof(arr) gives bytes; divide by sizeof(arr[0]) for the element count.