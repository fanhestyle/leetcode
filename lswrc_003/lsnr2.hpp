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

        unordered_map<char, int> charset;
        int maxCnt = 0;
        int currCnt = 0;
        int v = 0;

        for (int i = 0; i < s.size(); i++)
        {
            char ch = s.at(i);
            auto it = charset.find(ch);

            if (it != end(charset) && it->second >= v)
            {
                v = it->second;
                charset[ch] = i;
                currCnt = i - v;

                if (s.size() - i + currCnt <= maxCnt)
                    break;
            }
            else
            {
                charset[ch] = i;
                currCnt++;
                if (currCnt > maxCnt)
                    maxCnt = currCnt;
            }
        }
        return maxCnt;
    }
};