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
        vector<int> dp(len, 0);
        dp[0] = 1;

        for (int i = 1; i < len; i++)
        {
            int sum = 0;
            for (int j = 0; j <= i; j++)
            {
                if (isPalindromic(s, j, i))
                    sum += 1;
            }
            dp[i] = (dp[i - 1] + sum);
        }

        return dp[len - 1];
    }

    bool isPalindromic(const string& str, int i, int j)
    {
        while (i < j)
        {
            if (str[i++] != str[j--])
                return false;
        }
        return true;
    }
};