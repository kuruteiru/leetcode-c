#include <stdio.h>
#include <stdlib.h>

#include "two-sum.h"

int* twoSum(int* nums, size_t numsSize, int target, int* returnSize) {
    for (size_t i = 1; i < numsSize / sizeof(int); i++) {
        for (size_t j = 0; j < numsSize / sizeof(int); j++) {
            if (i == j || nums[i] + nums[j] != target) continue;

            int *sumIndices = (int*) malloc(2 * sizeof(int));
            
            *sumIndices = i;
            *(++sumIndices) = j;
            
            return &sumIndices;
        }
    }
    
    return NULL;
}

void solve() {
    int nums[] = {2, 7, 11, 15};
    int target = 9;

    int *sum = twoSum(nums, sizeof(nums), target, 2);

    printf("[%d, %d]", *sum, *(++sum));
}