#pragma once
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

// brutal force

class Solution
{
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3,
                     vector<int>& nums4)
    {
        int n = nums1.size();
        int cnt = 0;

        unordered_map<int, int> imap;
        for (int i = 0; i < n; i++)
        {
            imap[nums4[i]]++;
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                for (int k = 0; k < n; k++)
                {
                    int target = -(nums1[i] + nums2[j] + nums3[k]);

                    if (imap.count(target) > 0)
                    {
                        cnt += imap[target];
                    }
                }
            }
        }

        return cnt;
    }
};