#pragma once
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool backspaceCompare(string s, string t)
    {
        std::string real_s = getRealString(s);
        std::string real_t = getRealString(t);
        return real_s == real_t;
    }

    string getRealString(std::string& s)
    {
        int j = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != '#')
            {
                s[j++] = s[i];
            }
            else
            {
                j--;
                if (j < 0)
                    j = 0;
            }
        }
        return s.substr(0,j);
    }
};