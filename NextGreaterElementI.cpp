#include <stack>
#include <unordered_map>
#include <vector>
class Solution {
public:
  std::vector<int> nextGreaterElement(std::vector<int> &nums1,
                                      std::vector<int> &nums2) {
    std::unordered_map<int, int> nextGreater;
    std::stack<int> st;

    // looping  nums 2 from right to left
    for (int i = nums2.size() - 1; i >= 0; i--) {
      while (st.size() > 0 && st.top() <= nums2[i]) {
        st.pop();
      }
      if (st.empty()) {
        nextGreater[nums2[i]] = -1;
      } else {
        nextGreater[nums2[i]] = st.top();
      }
      st.push(nums2[i]);
    }
    std::vector<int> ans;
    for (int i = 0; i < nums1.size(); i++) {
      ans.push_back(nextGreater[nums1[i]]);
    }
    return ans;
  }
};
