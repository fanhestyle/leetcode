#pragma once
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int search(vector<int>& nums, int target)
    {
        int lo = 0, hi = nums.size();

        while (lo < hi)
        {
            int mid = lo + ((hi - lo) >> 1);

            if (target == nums[mid])
                return mid;

            if (target < nums[mid])
                hi = mid;
            else
                lo = mid + 1;
        }
        return -1;
    }
};