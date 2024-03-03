#include "problems/0217-contains-duplicate/contains-duplicate.h"

bool containsDuplicate(int *nums, size_t numsSize) {
    for (size_t i = 0; i < numsSize / sizeof(int); i++) {
        for (size_t j = 1; j < numsSize / sizeof(int); j += i) {
            if (nums[i] == nums[j] && i != j)
                return true;
        }
    }
    
    return false;
}

void solve() {
    int nums[] = {1, 2, 2, 4};
    int nums2[] = {3, 4, 6, 7};
    int nums3[] = {3, 4, 2, 4};

    bool cd = containsDuplicate(nums, sizeof(nums));

    printf("%s", cd);
}
