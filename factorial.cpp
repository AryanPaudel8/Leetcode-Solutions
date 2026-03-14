#include <iostream>

int fact(int n) {
  // Base case
  if (n == 0 || n == 1)
    return 1;
  return n * fact(n - 1);
}

int main() {
  std::cout << "factorial of 5:" << fact(5) << std::endl;
  return 0;
}
