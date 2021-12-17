#pragma once
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target)
    {
        vector<vector<int>> result;
        vector<int> track;
        sort(candidates.begin(), candidates.end());
        dfs(result, candidates, track, target, 0);

        return result;
    }

    void dfs(vector<vector<int>>& result, vector<int>& candidates,
             vector<int>& track, int target, int index)
    {
        if (!target)
        {
            result.push_back(track);
            return;
        }
        if (target < 0)
            return;

        for (int i = index; i < candidates.size(); i++)
        {
            if (i == index || candidates[i] != candidates[i - 1])
            {
                track.push_back(candidates[i]);
                dfs(result, candidates, track, target - candidates[i], i + 1);
                track.pop_back();
            }
        }
    }
};