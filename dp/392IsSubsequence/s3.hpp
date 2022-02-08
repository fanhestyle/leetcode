#include "../../testutils/binarytree_utils.hpp"
#include "../../testutils/debug.hpp"
#include "../../testutils/linklist_utils.hpp"
#include "../../testutils/twodarray_equal.hpp"
#include <bits/stdc++.h>
using namespace std;

// s = "abc";
// t = "ahbgdc";

class Solution
{
public:
    bool isSubsequence(string s, string t)
    {
        t.insert(t.begin(), ' ');
        int len1 = s.size(), len2 = t.size();

        vector<vector<int>> dp(len2, vector<int>(26, 0));

        for (char c = 'a'; c <= 'z'; c++)
        {
            int nextPos = -1; //表示接下来再不会出现该字符

            for (int i = len2 - 1; i >= 0; i--)
            { //为了获得下一个字符的位置，要从后往前
                dp[i][c - 'a'] = nextPos;
                if (t[i] == c)
                    nextPos = i;
            }
        }

        int index = 0;
        for (char c : s)
        {
            index = dp[index][c - 'a'];
            if (index == -1)
                return false;
        }
        return true;
    }
};