#pragma once
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int search(vector<int>& nums, int target)
    {
        int lo = 0, hi = nums.size() - 1;

        while (lo < hi)
        {
            int mid = lo + (hi - lo) / 2;
            if (nums[mid] < target)
                lo = mid + 1;
            else
                hi = mid;
        }

        return nums[lo] == target ? lo : -1;
    }
};