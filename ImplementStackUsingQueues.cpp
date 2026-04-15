
#include <queue>

class MyStack {
  std::queue<int> arr;

public:
  MyStack() {}

  void push(int x) {
    arr.push(x);
    for (int i = 0; i < arr.size() - 1; i++) {
      arr.push(arr.front());
      arr.pop();
    }
  }

  int pop() {
    int temp = arr.front();
    arr.pop();
    return temp;
  }

  int top() { return arr.front(); }

  bool empty() { return arr.empty(); }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
