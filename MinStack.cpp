#include <vector>
class MinStack {
  std::vector<int> arr;
  std::vector<int> minarr;

public:
  MinStack() {}

  void push(int val) {
    arr.push_back(val);

    if (minarr.empty() || val <= minarr.back()) {
      minarr.push_back(val); // New Minimum
    } else {
      minarr.push_back(minarr.back()); // repeat current minimum
    }
  }

  void pop() {
    if (!arr.empty()) {
      arr.pop_back();
      minarr.pop_back();
    }
  }

  int top() { return arr.back(); }

  int getMin() { return minarr.back(); }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
