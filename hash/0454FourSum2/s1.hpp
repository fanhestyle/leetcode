#pragma once
#include <bits/stdc++.h>
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
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                for (int k = 0; k < n; k++)
                {
                    for (int l = 0; l < n; l++)
                    {
                        if (nums1[i] + nums2[j] + nums3[k] + nums4[l] == 0)
                            ++cnt;
                    }
                }
            }
        }

        return cnt;
    }
};