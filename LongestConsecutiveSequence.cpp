#include <bits/stdc++.h>
using namespace std;

int longestConsecutive(vector<int> &nums) {
  unordered_set<int> s(nums.begin(), nums.end());
  int longest = 0;

  for (int num : s) {
    // Only start counting if it's the beginning of a sequence
    if (s.find(num - 1) == s.end()) {
      int current = num;
      int streak = 1;

      while (s.find(current + 1) != s.end()) {
        current++;
        streak++;
      }

      longest = max(longest, streak);
    }
  }

  return longest;
}
