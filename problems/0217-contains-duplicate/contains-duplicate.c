#include <contains-duplicate.h>

bool containsDuplicate(int *nums, int numsSize) {
    for (size_t i = 0; i < numsSize / sizeof(int); i++) {
        for (size_t j = 1; j < numsSize / sizeof(int); j++) {
            if (nums[i] == nums[j])
                return true;
        }
    }
    
    return false;
}

void solve() {

}
