#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minSubArrayLen(int target, vector<int>& nums)
    {
        queue<int> qv;
        int sum = 0;
        int len = nums.size() + 1;

        for (int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
            qv.push(nums[i]);
            while (sum >= target)
            {
                len = qv.size() < len ? qv.size() : len;
                sum -= qv.front();
                qv.pop();
            }
        }

        return len == nums.size() + 1 ? 0 : len;
    }
};