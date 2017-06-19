//
// Created by Soulier Antoine on 31/05/2017.
//

#include "OddOccurencesInArray.h"

/**
 * Returns the only unpaired value in an array
 * Explanation :
 * unpaired_value starts with a value of -1
 * If we return -1, all values in A[] have a duplicate
 *
 * We look for each elements if it has a duplicate, therefore we loop twice
 * We skip the case when i == j, it is the same element, not a duplicate
 * When A[i] == A[j], we found a duplicate and don't need to continue
 * If we successfully loop through the entire loop, there's no duplicate for A[i]
 *
 * @param A the array composed of paired values and at least one unpaired value
 * @param N the size of this array
 * @return the unpaired value
 */
int solution(int A[], int N) {

    /* int unpaired_value = -1;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (i == j) {
                continue;
            }

            if (A[i] == A[j]) {
                break;
            }

            if (i == N - 1 || j == N - 1) {
                unpaired_value = A[i];
            }
        }

        if (unpaired_value != -1)
            break;
    }

    return unpaired_value; */

    int ret = 0;

    for (int i = 0; i < N; ++i) {
        ret = ret ^ A[i];
    }

    return ret;
}
