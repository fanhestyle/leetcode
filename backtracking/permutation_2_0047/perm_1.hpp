#pragma once

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> permuteUnique(vector<int>& nums)
    {
        vector<vector<int>> result;
        sort(nums.begin(),nums.end());
        vector<int> track;
        dfs(result, nums, track, 0);
        return result;
    }

    void dfs(vector<vector<int>>& result, vector<int>& nums, vector<int>& track,
             int index)
    {
        if (track.size() == nums.size())
        {
            result.push_back(track);
            return;
        }

        for (int i = index; i < nums.size(); i++)
        {
            if (i == index || nums[i] != nums[i - 1])
            {
                if (nums[i] != -11)
                {
                    int selectedItem = nums[i];
                    track.push_back(nums[i]);
                    nums[i] = -11;
                    dfs(result, nums, track, 0);
                    track.pop_back();
                    nums[i] = selectedItem;
                }
            }
        }
    }
};