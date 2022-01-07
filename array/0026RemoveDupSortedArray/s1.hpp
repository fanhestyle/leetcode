#pragma once

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int>& nums)
    {
        int tmp = 200;
        int p = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != tmp)
            {
                tmp = nums[i];
                nums[p++] = nums[i];
            }
        }

        return p;
    }
};