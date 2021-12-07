#pragma once
#include <bits/stdc++.h>
using namespace std;

class Solution {
 public:
  static vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> imap;
    int cnt = 0;
    // for (auto& it : nums) imap.insert(pair<int, int>(it, cnt++));
    for (auto& it : nums) imap[it] = cnt++;

    for (int i = 0; i < nums.size(); i++) {
      auto it = imap.find(target - nums[i]);
      if (it != end(imap) && it->second != i) return {i, it->second};
    }
    return {};
  }
};