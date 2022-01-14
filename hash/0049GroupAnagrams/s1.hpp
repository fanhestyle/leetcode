#pragma once

/*
O(N^3)算法提交超时
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs)
    {
        vector<vector<string>> result;

        //O(N)
        for (int i = 0; i < strs.size(); ++i)
        {
            string item = strs[i];

            bool flag = false;

            //O(N)
            for (int j = 0; j < result.size(); ++j)
            {
                //O(N)
                if (isAnagram(item, result[j][0]))
                {
                    flag = true;
                    result[j].push_back(item);
                }
            }
            if (!flag)
                result.push_back(vector<string>({item}));
        }

        return result;
    }

//O(N)
    bool isAnagram(const string& a, const string& b)
    {
        if (a.empty() || b.empty())
            return false;

        unordered_map<char, int> mset;

        for (auto it : a)
        {
            mset[it]++;
        }

        for (auto it : b)
        {
            mset[it]--;
        }

        for (auto it = mset.begin(); it != mset.end(); ++it)
        {
            if (it->second != 0)
                return false;
        }
        return true;
    }
};