#pragma once

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int removeElement(vector<int>& nums, int val)
    {
        int cnt = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (val == nums[i])
            {
                cnt++;
                nums[i] = 100;
            }
        }
        sort(nums.begin(), nums.end());
        return nums.size() - cnt;
    }
};