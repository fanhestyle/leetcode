#pragma once

/*
brutal-force: backtracking
使用回溯法结果是超时
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> threeSum(vector<int>& nums)
    {
        vector<vector<int>> result;
        vector<int> track;
        dfs(result, nums, track, 0);
        return result;
    }

    bool isSameVec(vector<int>& v1, vector<int>& v2)
    {
        if (v1.size() != 3 || v2.size() != 3)
            return false;
        return (v1[0] == v2[0]) && (v1[1] == v2[1]) && (v1[2] == v2[2]);
    }

    bool isSameResult(vector<vector<int>>& r, vector<int>& oneItem)
    {
        for (int i = 0; i < r.size(); i++)
        {
            if (isSameVec(r[i], oneItem))
                return true;
        }
        return false;
    }

    void dfs(vector<vector<int>>& result, vector<int>& nums, vector<int>& track,
             int index)
    {
        if (track.size() > 3)
            return;

        if (track.size() == 3 && sumOfVec(track) == 0)
        {
            vector<int> r{track.begin(), track.end()};
            sort(r.begin(), r.end());

            if (!isSameResult(result, r))
                result.push_back(r);
        }

        for (int i = index; i < nums.size(); i++)
        {
            track.push_back(nums[i]);
            dfs(result, nums, track, i + 1);
            track.pop_back();
        }
    }

    int sumOfVec(vector<int>& track)
    {
        int sum = 0;
        for (auto it : track)
        {
            sum += it;
        }
        return sum;
    }
};