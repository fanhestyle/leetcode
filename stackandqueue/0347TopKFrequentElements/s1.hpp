#pragma once

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> topKFrequent(vector<int>& nums, int k)
    {
        unordered_map<int, int> countMap;
        multimap<int, int, std::greater<int>> hashMap;
        vector<int> vec;

        for (int i = 0; i < nums.size(); i++)
        {
            countMap[nums[i]]++;
        }

        for (auto it = countMap.begin(); it != countMap.end(); it++)
            hashMap.insert(make_pair(it->second, it->first));

        int i = 0;
        auto it = hashMap.begin();
        while (i++ < k)
        {
            vec.push_back((it++)->second);
        }

        return vec;
    }
};