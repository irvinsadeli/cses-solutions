#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int size;
    std::cin >> size;

    std::vector<long long> nums(size); 
    for (int i = 0; i < size; i++) {
        std::cin >> nums[i];
    }

    int distinct_count;
    std::sort(nums.begin(), nums.end());

    for (int i = 0; i < size; i++) {
        if (i == 0 || nums[i] != nums[i - 1]) {
            distinct_count++;
        }
    }
    
    std::cout << distinct_count;
}