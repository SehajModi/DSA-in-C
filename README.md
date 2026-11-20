# DSA in C

Daily data structures and algorithms practice, written in **C**, with a focus on the kind of thinking embedded work needs: bit manipulation, memory-aware array handling, and O(1)-memory solutions.

Every solution is a standalone file with its own tests in `main()`, and every topic has a short note on the key insight, so the repo shows how I reasoned and not just the final code.

## Why C?

I'm an Instrumentation and Control Engineering student working on embedded systems (STM32, sensor data, small ML models on microcontrollers). On a microcontroller you can't rely on big libraries or spare memory, so I practice DSA in the language I actually ship firmware in.

## Progress

| # | Problem | Pattern | Done | Redo |
|---|---------|---------|------|------|
| 1 | Power of two | `n & (n-1)` | Nov 19 | |
| 2 | Count set bits | Kernighan's trick | Nov 19 | |
| 3 | Single number | XOR cancels pairs | Nov 19 | Nov 21 |
| 4 | Reverse in place | Two pointers (both ends) | Nov 19 | Nov 22 |
| 5 | Move zeroes | Read / write pointers | Nov 19 | Nov 22 |
| 6 | Two-sum (sorted) | Two pointers | Nov 19 | Nov 26 |
| 7 | Prefix sums | Running totals | Nov 20 | Nov 22 |
| 8 | Max subarray (Kadane) | Running best | | |
| 9 | Moving-average filter on IMU data | Sliding window | | |

The "Redo" column is when I re-solve a problem from a blank file. If I can't, it goes back on the list.

## Repo structure

```
dsa-in-c/
├── bit-tricks/    # bit manipulation problems
├── arrays/        # array and two-pointer problems
├── notes/         # the key insight behind each problem
└── build/         # compiled binaries (git-ignored)
```

## How to run

Any file compiles on its own:

```bash
gcc -Wall -Wextra arrays/move_zeroes.c -o build/move_zeroes
./build/move_zeroes
```

On Windows (cmd):

```bat
gcc -Wall -Wextra arrays\move_zeroes.c -o build\move_zeroes.exe
build\move_zeroes.exe
```

Each file prints its test results, and the expected output is written next to each `printf` as a comment.

## How I practice

1. Try the problem alone first, even if I get stuck.
2. Understand the idea, not just the code.
3. Write it again from scratch.
4. Test edge cases: `0`, `1`, empty or single-element inputs, all bits set.
5. Write the insight in `notes/`, then redo it after 2 days and again after a week.

## Roadmap

- [x] Bit manipulation
- [x] Arrays and two pointers
- [ ] Prefix sums and sliding window
- [ ] Hashing
- [ ] Recursion and sorting
- [ ] Linked lists, stacks, queues in C
- [ ] Applying these to real sensor data on STM32

## About

I'm Sehaj Modi, a B.Tech student in Instrumentation and Control Engineering at NIT Jalandhar, interested in embedded systems and embedded ML. More of my work is on my [GitHub profile](https://github.com/SehajModi).