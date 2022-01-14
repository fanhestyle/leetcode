#pragma once
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3,
                     vector<int>& nums4)
    {
        int n = nums1.size();
        int cnt = 0;

        vector<int> sum12;
        for (auto it1 : nums1)
            for (auto it2 : nums2)
                sum12.push_back(it1 + it2);

        unordered_map<int, int> imap;
        for (auto it3 : nums3)
            for (auto it4 : nums4)
                imap[it3 + it4]++;

        for (int i = 0; i < sum12.size(); i++)
        {
            int target = -sum12[i];

            if (imap.count(target) > 0)
            {
                cnt += imap[target];
            }
        }
        return cnt;
    }
};