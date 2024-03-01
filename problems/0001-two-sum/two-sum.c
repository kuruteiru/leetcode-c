#include <stdio.h>
#include <stdlib.h>

#include "two-sum.h"

int* twoSum(int* nums, size_t numsSize, int target, int* returnSize) {
    for (size_t i = 1; i < numsSize; i++) {
        for (size_t j = 0; j < numsSize; j++) {
            if (nums[i] + nums[j] != target || i == j)  
                continue;

            int *sumIndices = (int*) malloc(2 * sizeof(int));
            
            sumIndices[0] = i;
            sumIndices[1] = j;

            *returnSize = 2;
            return sumIndices;
        }
    }
    
    *returnSize = 0;
    return NULL;
}

void solve() {
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int returnSize = 0;

    int *sum = twoSum(nums, sizeof(nums), target, &returnSize);

    if (returnSize == 2)
        printf("[%d, %d]", *sum, *(sum + 1));
    else
        printf("[]");
}