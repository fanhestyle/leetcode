/*
    所有文件名中包含有 _web_ 的文件都是来自于
    网络上的大神给出的解答
    在学习之后记录于此
*/

#pragma once
#include <bits/stdc++.h>
using namespace std;

/*
算法的时间复杂度是O(N)，空间复杂度是O(N)
*/

class Solution {
 public:
  static vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> imap;
    for (int i = 0; i < nums.size(); i++) {
      int valueToFind = target - nums[i];
      auto it = imap.find(valueToFind);
      if (it != end(imap)) return {it->second, i};
      imap[nums[i]] = i;
    }
    return {};
  }
};
