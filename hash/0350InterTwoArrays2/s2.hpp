#pragma once

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2)
    {
        vector<int> result;

        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        int cnt1 = 0;
        int cnt2 = 0;

        while (cnt1 < nums1.size() && cnt2 < nums2.size())
        {
            if (nums1[cnt1] == nums2[cnt2])
            {
                result.push_back(nums1[cnt1]);
                cnt1++;
                cnt2++;
            }
            else if (nums1[cnt1] < nums2[cnt2])
            {
                cnt1++;
            }
            else
            {
                cnt2++;
            }
        }

        return result;
    }
};