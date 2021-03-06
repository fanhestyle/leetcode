#include "../../testutils/binarytree_utils.hpp"
#include "../../testutils/debug.hpp"
#include "../../testutils/linklist_utils.hpp"
#include "../../testutils/twodarray_equal.hpp"
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findLength(vector<int>& nums1, vector<int>& nums2)
    {
        int len1 = nums1.size();
        int len2 = nums2.size();

        int maxsamelen = 0;

        vector<vector<int>> dp(len1 + 1, vector<int>(len2 + 1, 0));
        for (int i = 1; i <= len1; i++)
        {
            for (int j = 1; j <= len2; j++)
            {
                if (nums1[i-1] == nums2[j-1])
                {
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                    if (maxsamelen < dp[i][j])
                        maxsamelen = dp[i][j];
                }
            }
        }

        return maxsamelen;
    }
};