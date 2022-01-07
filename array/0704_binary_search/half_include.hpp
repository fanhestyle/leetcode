#pragma once
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int search(vector<int>& nums, int target)
    {
        int lo = 0, hi = nums.size();
        return bsearch(nums, lo, hi, target);
    }

    int bsearch(vector<int>& nums, int lo, int hi, int target)
    {
        if (lo >= hi)
            return -1;

        int mid = lo + ((hi - lo) >> 1);
        if (nums[mid] == target)
            return mid;

        if (target < nums[mid])
            return bsearch(nums, lo, mid, target);
        else
            return bsearch(nums, mid + 1, hi, target);
    }
};