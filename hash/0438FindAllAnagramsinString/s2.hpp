#pragma once

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> findAnagrams(string s, string p)
    {
        if (s.length() < p.length())
            return {};

        vector<int> result;

        int window[26] = {0};
        int need[26] = {0};
        int DIFF_CHAR_CNT = 0; //总共有多少个不同的字母
        int matchDiffCnt = 0;

        for (int i = 0; i < p.length(); i++)
        {
            if (0 == need[p[i] - 'a'])
                DIFF_CHAR_CNT++;
            need[p[i] - 'a']++;
        }

        int left = 0, right = 0;

        while (right < s.length())
        {
            char curRightChar = s[right];
            right++;

            if (need[curRightChar - 'a'])
            {
                window[curRightChar - 'a']++;
                if (window[curRightChar - 'a'] == need[curRightChar - 'a'])
                {
                    matchDiffCnt++;
                }
            }

            if (right - left == p.length())
            {
                char curLeftChar = s[left];

                if (matchDiffCnt == DIFF_CHAR_CNT)
                {
                    result.push_back(left);
                }

                if (need[curLeftChar - 'a'])
                {
                    if (window[curLeftChar - 'a'] == need[curLeftChar - 'a'])
                        matchDiffCnt--;
                    window[curLeftChar - 'a']--;
                }
                left++;
            }
        }

        return result;
    }
};