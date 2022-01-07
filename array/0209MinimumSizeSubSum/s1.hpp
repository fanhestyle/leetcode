/*
算法时间复杂度O(N^2)
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minSubArrayLen(int target, vector<int>& nums)
    {
        int len = nums.size() + 1;

        for (int i = 0; i < nums.size(); i++)
        {
            int sum = 0;
            for (int j = i; j < nums.size(); j++)
            {
                sum += nums[j];
                if (sum >= target)
                {
                    if (j - i + 1 < len)
                        len = j - i + 1;
                    break;
                }
            }
        }

        if (len == nums.size()+1)
            len = 0;
        return len;
    }
};