#pragma once
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target)
    {
        if (nums.size() < 4)
            return {};

        sort(nums.begin(), nums.end());
        vector<vector<int>> result;

        for (int i = 0; i < nums.size(); i++)
        {
            if (i > 0 && nums[i] == nums[i - 1])
                continue;

            int sumOf3 = target - nums[i];
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (j > i + 1 && nums[j] == nums[j - 1])
                    continue;

                int sumOf2 = sumOf3 - nums[j];

                int left = j + 1, right = nums.size() - 1;

                while (left < right)
                {
                    if (nums[left] + nums[right] < sumOf2)
                    {
                        left++;
                        while (left < right && nums[left] == nums[left - 1])
                            ++left;
                    }
                    else if (nums[left] + nums[right] > sumOf2)
                    {
                        right--;
                        while (left < right && nums[right] == nums[right + 1])
                            --right;
                    }
                    else
                    {
                        result.push_back(vector<int>(
                            {nums[i], nums[j], nums[left], nums[right]}));
                        left++;
                        right--;
                        while (left < right && nums[left] == nums[left - 1])
                            ++left;
                        while (left < right && nums[right] == nums[right + 1])
                            --right;
                    }
                }
            }
        }

        return result;
    }
};