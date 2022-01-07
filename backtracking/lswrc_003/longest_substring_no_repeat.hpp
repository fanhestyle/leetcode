#pragma once
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    static int lengthOfLongestSubstring(string s)
    {
        if (s.empty())
            return 0;

        int maxCnt = 0;

        unordered_set<char> charHash;

        for (int i = 0; i < s.size(); i++)
        {
            int cnt = 0;
            charHash.clear();

            for (int j = i; j < s.size(); j++)
            {
                if (charHash.find(s[j]) == end(charHash))
                {
                    cnt++;
                    charHash.insert(s[j]);
                }
                else
                    break;
            }
            if (cnt > maxCnt)
                maxCnt = cnt;
        }

        return maxCnt;
    }
};