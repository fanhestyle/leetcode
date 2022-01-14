#pragma once

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2)
    {
        vector<int> result;
        vector<int> vec(1001, -1);

        for (int i = 0; i < nums1.size(); i++)
        {
            vec[nums1[i]]++;
        }

        for (int i = 0; i < nums2.size(); i++)
        {
            if (vec[nums2[i]] != -1)
            {
                result.push_back(nums2[i]);
                --vec[nums2[i]];
            }
        }

        return result;
    }
};