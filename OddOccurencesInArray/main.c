#include <stdio.h>
#include "OddOccurencesInArray.h"

#define ARRAY_LENGTH 9

int main() {
    int P[ARRAY_LENGTH] = {4, 3, 5, 3, 5, 2, 2, 6, 6};
    int S = solution(P, ARRAY_LENGTH);

    printf("Problem is : ");
    for (int i = 0; i < ARRAY_LENGTH; ++i)
        printf("%d ", P[i]);

    printf("\nSolution is : %d\n", S);

    return 0;
}