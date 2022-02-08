#include "../../testutils/binarytree_utils.hpp"
#include "../../testutils/debug.hpp"
#include "../../testutils/linklist_utils.hpp"
#include "../../testutils/twodarray_equal.hpp"
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countSubstrings(string s)
    {
        int len = s.length();
        vector<vector<int>> dp(len, vector<int>(len,0));

        for(int i = len-1; i >= 0; i--)
        {
            for(int j = i; j < len; j++)
            {
                if(s[i] == s[j])
                {
                    if (j - i < 2){
                        dp[i][j] = 1;
                    }
                    else{
                        dp[i][j] = dp[i+1][j-1];
                    }
                } 
                else
                {
                    dp[i][j] = 0;
                }
            }
        }

        int result = 0;
        for(int i = 0; i < len; i++)
            for(int j = 0; j < len; j++)
                if(dp[i][j] == 1)
                    result++;
        
        return result;
    }
};
 