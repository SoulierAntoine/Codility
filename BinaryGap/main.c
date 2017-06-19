#include <stdio.h>

#include "binary_gap.h"

int main() {
    long N = 1041;
    int gap = solution(N);
    printf("For %ld, the binary gap is %d.\n", N, gap);
    return 0;
}