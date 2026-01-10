#include <iostream>

class Solution {
public:
  int climbStairs(int n) {
    if (n == 0 || n > 45) {
      std::cout
          << "n must be greater than or equal to 1 or less than or requal to 45"
          << std::endl;
      return 0;
    }
    // base case
    if (n == 1)
      return 1;
    int a = 1, b = 2;
    for (int i = 3; i <= n; i++) {
      int temp = a + b;
      a = b;
      b = temp;
    }
    return b;
  }
};
