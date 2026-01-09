#include <iostream>
#include <stack>
#include <string>
class Solution {
public:
  bool isValid(std::string s) {
    std::stack<char> symbol;

    for (char c : s) {
      // Pushing opening Brackets
      if (c == '(' || c == '{' || c == '[') {
        symbol.push(c);
      } else {
        if (symbol.empty()) {
          return false;
        }
        char top = symbol.top();
        symbol.pop();

        // checking matching pair
        if ((c == ')' && top != '(') ||
            ((c == '}' && top != '{') || c == ']' && top != '[')

        ) {
          return false;
        }
      }
    }
    return symbol.empty();
  }
};
