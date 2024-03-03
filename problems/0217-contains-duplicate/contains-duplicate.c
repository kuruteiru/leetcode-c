#include <stdio.h>
#include "contains-duplicate.h"

bool containsDuplicate(int *nums, size_t numsSize) {
    for (size_t i = 0; i < numsSize / sizeof(int); i++) {
        for (size_t j = i; j < numsSize / sizeof(int); j++) {
            if (nums[i] == nums[j] && i != j)
                return true;
        }
    }
    
    return false;
}

void solve() {
    int nums[] = {1, 2, 2, 4};

    bool result = containsDuplicate(nums, sizeof(nums));

    printf("input: [");
    size_t numsLength = sizeof(sizeof(nums) / sizeof(int));
    for (size_t i = 0; i < numsLength - 1; i++) {
        printf("%d, ", nums[i]);
    }
    printf("%d]\n", nums[numsLength - 1]);

    printf("output: %s", result ? "true" : "false");
}
