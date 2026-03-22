#include <unordered_map>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target) {
  unordered_map<int, int> seen; // value -> index

  for (int i = 0; i < nums.size(); i++) {
    int diff = target - nums[i];

    if (seen.find(diff) != seen.end()) {
      return {seen[diff], i};
    }

    seen[nums[i]] = i;
  }

  return {}; // fallback (though problem guarantees a solution)
}
