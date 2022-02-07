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

        vector<vector<int>> dp(len1, vector<int>(len2 + 1, 0));
        for(int i = 1; i <= len2; i++)
        {
            if(nums2[i-1] == nums1[0]){
                dp[0][i] = 1;
            }
            dp[0][i] = max(dp[0][i],dp[0][i-1]);
        }

        for(int i = 1; i < len1; i++)
        {
            for(int j = 1; j <= len2; j++)
            {
                //if ()
                //if(j < i)
                //    dp[i][j] = dp[i-1][j];
                //else
                //{
                    if(nums1[i] == nums2[j-1])
                        dp[i][j] = max(dp[i][j], 1 + dp[i-1][j-1]);
                    else
                        dp[i][j] = max(dp[i][j-1],dp[i-1][j]);
               // }
            }
        }

        return dp[len1-1][len2];
    }
};