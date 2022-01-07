#pragma once
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> searchRange(vector<int>& nums, int target)
    {
        int leftBound = getLeftBound(nums, target);
        int rightBound = getRightBound(nums, target);
        if (leftBound == -2 || rightBound == -2)
            return {-1, -1};
        else
            return {leftBound + 1, rightBound - 1};
    }

    int getLeftBound(vector<int>& nums, int target)
    {
        int lo = 0, hi = nums.size() - 1;
        int leftBound = -2;

        while (lo <= hi)
        {
            int mid = lo + (hi - lo) / 2;
            if (target < nums[mid])
            {
                hi = mid - 1;
            }
            else if (nums[mid] < target)
            {
                lo = mid + 1;
            }
            else
            {
                hi = mid - 1;
                leftBound = hi;
            }
        }

        return leftBound;
    }

    int getRightBound(vector<int>& nums, int target)
    {
        int lo = 0, hi = nums.size() - 1;
        int rightBound = -2;

        while (lo <= hi)
        {
            int mid = lo + (hi - lo) / 2;
            if (nums[mid] < target)
            {
                lo = mid + 1;
            }
            else if (target < nums[mid])
            {
                hi = mid - 1;
            }
            else
            {
                lo = mid + 1;
                rightBound = lo;
            }
        }
        return rightBound;
    }
};