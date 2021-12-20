#pragma once

#include <bits/stdc++.h>
using namespace std;

//求组合数
// (n)
// (k)

class Solution
{
public:
    vector<vector<int>> combine(int n, int k)
    {
        vector<vector<int>> result;
        vector<int> track;

        dfs(result, track, n, k, 1);
        return result;
    }

    void dfs(vector<vector<int>>& result, vector<int>& track, int n, int k,
             int index)
    {
        if (track.size() == k)
        {
            result.push_back(track);
            return;
        }

        for (int i = index; i <= n; i++)
        {
            track.push_back(index);
            dfs(result, track, n, k, ++index);
            track.pop_back();
        }
    }
};