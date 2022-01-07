#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minSubArrayLen(int target, vector<int>& nums)
    {
        int sum = 0;
        int sz = nums.size();
        int minLen = sz + 1;

        int left = 0, right = 0;

        for (int i = 0; i < sz; ++i)
        {
            sum += nums[i];
            ++right;

            while (sum >= target)
            {
                sum -= nums[left++];
                int window = right - left + 1;
                minLen = window < minLen ? window : minLen;
            }
        }

        return minLen == sz + 1 ? 0 : minLen;
    }
};