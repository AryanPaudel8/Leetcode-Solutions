#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<std::vector<int>> subsets(std::vector<int>& nums) {
        int n = nums.size();
        std::vector<std::vector<int>> ans;

        // Loop through all possible subsets (2^n)
        for (int i = 0; i < (1 << n); i++) {
            std::vector<int> subset;

            // Check each bit of i
            for (int j = 0; j < n; j++) {
                if ((1 << j) & i) {
                    subset.push_back(nums[j]);
                }
            }

            ans.push_back(subset);
        }

        return ans;
    }
};

int main() {
    Solution solution;
    std::vector<int> nums = {1, 2, 3};
    std::vector<std::vector<int>> result = solution.subsets(nums);

    for (const auto& subset : result) {
        std::cout << "[";
        for (int num : subset) {
            std::cout << num << " ";
        }
        std::cout << "]\n";
    }

    return 0;
}
