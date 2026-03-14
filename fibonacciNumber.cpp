#include <iostream>

class Solution {
public:
  int fib(int n) {
    if (n == 0)
      return 0;
    if (n == 1)
      return 1;

    // recursive case
    return fib(n - 1)+fib(n-2);
  }
};

int main() {
  Solution solution;
  std::cout << solution.fib(8) << std::endl;
  return 0;
}
