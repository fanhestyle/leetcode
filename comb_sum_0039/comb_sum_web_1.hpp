#pragma once

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target)
    {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> result;
        vector<int> track;
        dfs(result, candidates, track, target, 0);

        return result;
    }

    void dfs(vector<vector<int>>& result, vector<int>& candidates,
             vector<int>& track, int target, int startIndex)
    {
        if (!target)
        {
            result.push_back(track);
        }

        for (int i = startIndex;
             i < candidates.size() && target >= candidates[i]; i++)
        {
            track.push_back(candidates[i]);
            dfs(result, candidates, track, target - candidates[i], i);
            track.pop_back();
        }
    }
};