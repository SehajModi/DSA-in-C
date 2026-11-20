// Problem: answer many "sum from index l to r" queries quickly.
// Insight: p[i] = sum of the first i elements, so sum(l, r) = p[r+1] - p[l].

#include<stdio.h>

int range_sum(int p[], int l, int r) {
    int c = p[r+1] - p[l];
    return c;
}

int main(void){
int a[] = {2, 4, 1, 3, 5};
int n = sizeof(a) / sizeof(a[0]);
int p[6];            // n + 1 slots
p[0] = 0;

for(int i = 0; i < n; i++) {
    p[i+1] = p[i]+ a[i];
}

printf("%d\n", range_sum(p, 0, 4));   // expect 15
printf("%d\n", range_sum(p, 1, 3));   // expect 8
printf("%d\n", range_sum(p, 2, 2));   // expect 1
printf("%d\n", range_sum(p, 0, 0));   // expect 2

}