#pragma once

#include <bits/stdc++.h>
using namespace std;

/*
class Solution {
public:
    std::vector<std::vector<int> > subsetsWithDup(std::vector<int> &nums) {
        std::sort(nums.begin(), nums.end());
        std::vector<std::vector<int> > res;
        std::vector<int> vec;
        subsetsWithDup(res, nums, vec, 0);
        return res;
    }
private:
    void subsetsWithDup(std::vector<std::vector<int> > &res, std::vector<int>
&nums, std::vector<int> &vec, int begin) { res.push_back(vec); for (int i =
begin; i != nums.size(); ++i) if (i == begin || nums[i] != nums[i - 1]) {
                vec.push_back(nums[i]);
                subsetsWithDup(res, nums, vec, i + 1);
                vec.pop_back();
            }
    }
};
*/

class Solution
{
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums)
    {
        vector<vector<int>> result;
        vector<int> track;
        sort(nums.begin(), nums.end());
        result.push_back({});
        dfs(result, nums, track, 0);
        return result;
    }

    void dfs(vector<vector<int>>& result, vector<int>& nums, vector<int>& track,
             int index)
    {
        if (index == nums.size())
            return;

        for (int i = index; i < nums.size(); i++)
        {
            if ((i == index) || (nums[i] != nums[i - 1]))
            {
                track.push_back(nums[i]);
                result.push_back(track);
                dfs(result, nums, track, i + 1);
                track.pop_back();
            }
        }
    }
};
