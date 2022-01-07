#pragma once
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> searchRange(vector<int>& nums, int target)
    {
        int leftBound = findLeftBound(nums, target);
        int rightBound = findRightBound(nums, target);

        if ((leftBound == -1) || (rightBound == -1))
            return {-1, -1};

        return {leftBound, rightBound};
    }

    int findLeftBound(vector<int>& nums, int target)
    {
        if (nums.size() == 0)
            return -1;

        int lo = 0, hi = nums.size();

        while (lo < hi)
        {
            int mid = lo + (hi - lo) / 2;

            if (target < nums[mid])
            {
                hi = mid;
            }
            else if (nums[mid] < target)
            {
                lo = mid + 1;
            }
            else
            {
                hi = mid;
            }
        }

        if (hi == nums.size())
            return -1;

        return nums[hi] == target ? hi : -1;
    }

    int findRightBound(vector<int>& nums, int target)
    {
        if (nums.size() == 0)
            return -1;

        int lo = 0, hi = nums.size();

        while (lo < hi)
        {
            int mid = lo + (hi - lo) / 2;

            if (target < nums[mid])
            {
                hi = mid;
            }
            else if (nums[mid] < target)
            {
                lo = mid + 1;
            }
            else
            {
                lo = mid + 1;
            }
        }

        if (lo == 0)
            return -1;

        return nums[lo - 1] == target ? (lo - 1) : -1;
    }

    /*
        int findLeftBound(vector<int>& nums, int target)
        {
            if (nums.size() == 0)
                return -1;

            int left = 0;
            int right = nums.size();

            while (left < right)
            {
                int mid = left + (right - left) / 2;
                if (nums[mid] == target)
                {
                    right = mid;
                }
                else if (nums[mid] < target)
                {
                    left = mid + 1;
                }
                else if (nums[mid] > target)
                {
                    right = mid;
                }
            }

            if (left == nums.size())
                return -1;
            return nums[left] == target ? left : -1;
        }

        int findRightBound(vector<int>& nums, int target)
        {
            if (nums.size() == 0)
                return -1;
            int left = 0, right = nums.size();

            while (left < right)
            {
                int mid = left + (right - left) / 2;
                if (nums[mid] == target)
                {
                    left = mid + 1;
                }
                else if (nums[mid] < target)
                {
                    left = mid + 1;
                }
                else if (nums[mid] > target)
                {
                    right = mid;
                }
            }

            if (left == 0)
                return -1;

            return nums[left - 1] == target ? (left - 1) : -1;
        }
    */
};