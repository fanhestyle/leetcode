#pragma once
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    static int lengthOfLongestSubstring(string s)
    {
        int startIndex = -1;
        vector<int> vec(256, startIndex);
        int maxCnt = 0;
        int stringLen = s.size();

        for (int i = 0; i < stringLen; i++)
        {
            if (vec[s[i]] > startIndex)
            {
                startIndex = vec[s[i]];
                if (maxCnt >= stringLen - startIndex)
                    break;
            }

            vec[s[i]] = i;
            maxCnt = max(i - startIndex, maxCnt);
        }
        return maxCnt;
    }
};