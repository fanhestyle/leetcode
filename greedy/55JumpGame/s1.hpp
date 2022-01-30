#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool canJump(vector<int>& nums)
    {
        if (nums.size() == 0)
            return false;

        int range = nums[0];
        for (int i = 1; i < nums.size() - 1; i++)
        {
            if (i > range)
                return false;

            if (nums[i] + i > range)
            {
                range = nums[i] + i;
            }
        }

        return range >= nums.size() - 1 ? true : false;
    }
};