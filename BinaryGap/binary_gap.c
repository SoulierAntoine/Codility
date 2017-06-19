//
// Created by Soulier Antoine on 31/05/2017.
//

#include "binary_gap.h"

/**
 * Returns the maximum number of consecutive 0s in a number (converted to binary)
 * Explanation :
 * Bitwise AND = &
 * Is 1 only if both bits equal 1
 *
 * Example :
 *       1001 1100 == 156
 * & 1 = 0000 0000 == 0
 *
 * if ((156 & 1) == 1) {
 *  printf("Goes here when the bit is 1");
 * } else {
 *  printf("Goes here when the bit is 0");
 * }
 *
 * N >>= 1;
 * >>= is a right shift assignment
 * It removes the lowest bit, 10011100 becomes 1001110
 * Equivalent to log2(156);

 * @param N long number we want to get the binary gap
 * @return int the length of the gap
 */

int solution(long N) {
    int gap = 0, tmp = 0;

    while (N > 0) {
        if ((N & 1) == 1) {
            if (tmp > gap) {
                gap = tmp;
            }

            tmp = 0;
        } else {
            tmp++;
        }

        N >>= 1;
    }

    return gap;
}


