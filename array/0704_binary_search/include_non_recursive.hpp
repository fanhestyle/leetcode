#pragma once
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int search(vector<int>& nums, int target)
    {
        int lo = 0, hi = nums.size() - 1;

        while (lo <= hi)
        {
            int mid = lo + (hi - lo) / 2;
            if (target == nums[mid])
            {
                return mid;
            }
            else if (target < nums[mid])
            {
                hi = mid - 1;
            }
            else
            {
                lo = mid + 1;
            }
        }

        return -1;
    }
};