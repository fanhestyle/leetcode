#pragma once

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target)
    {
        vector<vector<int>> result;
        vector<int> track;

        dfs(result, candidates, track, target, 0);

        return result;
    }

    void dfs(vector<vector<int>>& result, vector<int>& candidates,
             vector<int>& track, int remain, int index)
    {
        if (remain == 0)
        {
            result.push_back(track);
            return;
        }

        if (remain < 0)
            return;

        for (int i = index; i < candidates.size(); i++)
        {
            track.push_back(candidates[i]);
            remain -= candidates[i];
            dfs(result, candidates, track, remain, i);
            track.pop_back();
            remain += candidates[i];
        }
    }
};

