#pragma once

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> subsets(vector<int>& nums)
    {
        vector<vector<int>> result;
        vector<int> track;
        result.push_back({});
        dfs(result, nums, track, 0);
        return result;
    }

    void dfs(vector<vector<int>>& result, vector<int>& nums, vector<int>& track,
             int index)
    {
        if (index == nums.size())
        {
            return;
        }

        for (int i = index; i < nums.size(); i++)
        {
            track.push_back(nums[i]);
            result.push_back(track);
            dfs(result, nums, track, ++index);

            track.pop_back();
        }
    }
};