#include <stack>
#include <vector>

class Solution {
public:
  std::vector<int> dailyTemperatures(std::vector<int> &temperatures) {
    int n = temperatures.size();
    std::vector<int> result(n, 0);
    std::stack<int> st;

    for (int i = 0; i < n; i++) {

      while (!st.empty() && temperatures[i] > temperatures[st.top()]) {
        int prevIndex = st.top();
        st.pop();
        result[prevIndex] = i - prevIndex;
      }
      st.push(i);
    }

    return result;
  }
};
