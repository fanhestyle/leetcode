#pragma once

/*
double-ptr
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> threeSum(vector<int>& nums)
    {
        if (nums.size() < 3)
        {
            return {};
        }

        vector<vector<int>> result;

        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > 0)
                return result;

            if (i > 0 && nums[i] == nums[i - 1])
                continue;

            int left = i + 1, right = nums.size() - 1;
            int sumOfSecAndThird = -nums[i];

            while (left < right)
            {
                if (nums[left] + nums[right] < sumOfSecAndThird)
                {
                    left++;
                    while (left < right && nums[left] == nums[left - 1])
                    {
                        left++;
                    }
                }
                else if (nums[left] + nums[right] > sumOfSecAndThird)
                {
                    right--;
                    while (left < right && nums[right] == nums[right + 1])
                    {
                        right--;
                    }
                }
                else
                {
                    result.push_back(
                        vector<int>({nums[i], nums[left], nums[right]}));
                    left++;
                    right--;
                    while (left < right && nums[left] == nums[left - 1])
                    {
                        left++;
                    }
                    while (left < right && nums[right] == nums[right + 1])
                    {
                        right--;
                    }
                }
            }
        }

        return result;
    }
};