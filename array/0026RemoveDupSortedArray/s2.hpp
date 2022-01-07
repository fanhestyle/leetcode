#pragma once

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int>& nums)
    {
        int p = 0;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] == nums[i - 1])
            {
                p++;
            }
            else
            {
                nums[i - p] = nums[i];
            }
        }

        return nums.size() - p;
    }
};