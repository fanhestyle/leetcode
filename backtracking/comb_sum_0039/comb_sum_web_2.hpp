#pragma once

#include <bits/stdc++.h>
using namespace std;

/*
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
            if (i == startIndex || candidates[i] != candidates[i-1])
            track.push_back(candidates[i]);
            dfs(result, candidates, track, target - candidates[i], i+1);
            track.pop_back();
        }
    }
};
*/

class Solution {
public:
    std::vector<std::vector<int> > combinationSum(std::vector<int> &candidates, int target) {
        std::sort(candidates.begin(), candidates.end());
        std::vector<std::vector<int> > res;
        std::vector<int> combination;
        combinationSum(candidates, target, res, combination, 0);
        return res;
    }
private:
    void combinationSum(std::vector<int> &candidates, int target, std::vector<std::vector<int> > &res, std::vector<int> &combination, int begin) {
        if (!target) {
            res.push_back(combination);
            return;
        }
        for (int i = begin; i != candidates.size() && target >= candidates[i]; ++i)
            if (i == begin || candidates[i] != candidates[i - 1]) {
                combination.push_back(candidates[i]);
                combinationSum(candidates, target - candidates[i], res, combination, i + 1);
                combination.pop_back();
            }
    }
};