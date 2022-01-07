#pragma once
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int search(vector<int>& nums, int target)
    {
        return bsearch(nums, 0, nums.size() - 1, target);
    }

    int bsearch(vector<int>& nums, int lo, int hi, int target)
    {
        if (lo > hi)
            return -1;

        int mid = lo + (hi - lo) / 2;

        if (target == nums[mid])
            return mid;

        if (target < nums[mid])
            return bsearch(nums, lo, mid - 1, target);
        else
            return bsearch(nums, lo + 1, hi, target);
    }
};