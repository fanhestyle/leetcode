#pragma once

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void moveZeroes(vector<int>& nums)
    {
        if (nums.empty())
            return;

        int left = 0, right = 0;
        for (int right = 0; right < nums.size(); right++)
        {
            if (nums[right] != 0)
            {
                while (left < right && nums[left] != 0)
                {
                    left++;
                }
                if (nums[left] == 0)
                    swap(nums[left], nums[right]);
            }
        }
    }
};
