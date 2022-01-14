#pragma once
#include <bits/stdc++.h>
using namespace std;

/*
因为要返回索引，所以不能排序去做!!!!，如果返回值是可以排序的！！！
*/

class Solution
{
public:
    static vector<int> twoSum(vector<int>& nums, int target)
    {
        //sort(nums.begin(), nums.end());

        int left = 0;
        int right = nums.size() - 1;

        while (left < right)
        {
            if (left < right && nums[left] + nums[right] < target)
            {
                left++;
            }

            else if (left < right && nums[left] + nums[right] > target)
            {
                right--;
            }
            else
            {
                return {left, right};
            }
        }

        return {-1,-1};
    }
};