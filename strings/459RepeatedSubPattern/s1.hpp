#pragma once

#include <bits/stdc++.h>
using namespace std;

//brutal force

class Solution
{
public:
    bool repeatedSubstringPattern(string s)
    {
        int len = s.length();

        for (int i = 1; i <= len / 2 + 1; i++)
        {
            string subString = s.substr(0, i);

            int n = subString.size();

            if (len % n != 0)
                continue;

            int m = len / n;
            if (m < 2)
                return false;

            string news;
            news.resize(len);
            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    news[n * i + j] = subString[j];
                }
            }
            if (s == news)
                return true;
        }

        return false;
    }
};