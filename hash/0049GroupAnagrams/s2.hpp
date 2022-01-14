#pragma once

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs)
    {
        if (strs.empty())
        {
            return {{}};
        }

        vector<vector<string>> result;
        unordered_map<string, vector<string>> stringHash;

        for (int i = 0; i < strs.size(); i++)
        {
            string item = strs[i];
            sort(item.begin(), item.end());
            stringHash[item].push_back(strs[i]);
        }

        for (auto iter = stringHash.begin(); iter != stringHash.end(); iter++)
        {
            result.emplace_back(iter->second);
        }

        return result;
    }
};