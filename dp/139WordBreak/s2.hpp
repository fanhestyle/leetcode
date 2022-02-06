#include "../../testutils/binarytree_utils.hpp"
#include "../../testutils/debug.hpp"
#include "../../testutils/linklist_utils.hpp"
#include "../../testutils/twodarray_equal.hpp"
#include <bits/stdc++.h>
using namespace std;

// dp

class Solution
{
public:
    bool wordBreak(string s, vector<string>& wordDict)
    {
        int len = s.size();
        vector<bool> dp(len + 1, 0);
        dp[0] = true;

        for (int j = 0; j <= len; j++)
        {
            for (int i = 0; i < wordDict.size(); i++)
            {
                if (j >= wordDict[i].size())
                {
                    string curString = s.substr(0, j);
                    string sub =
                        curString.substr(curString.size() - wordDict[i].size());
                    string one = wordDict[i];

                    if (sub == one)
                    {
                        dp[j] = dp[curString.size() - wordDict[i].size()] | dp[j];
                    }
                }
            }
        }

        return dp[len];
    }
};