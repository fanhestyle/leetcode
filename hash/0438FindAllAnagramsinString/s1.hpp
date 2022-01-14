#pragma once

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> findAnagrams(string s, string p)
    {
        if (p.length() > s.length())
            return {};

        vector<int> result;
        sort(p.begin(), p.end());

        for (int i = 0; i < s.length() - p.length() + 1; i++)
        {
            string substring = s.substr(i, p.length());
            sort(substring.begin(), substring.end());
            if (p == substring)
            {
                result.push_back(i);
            }
        }

        return result;
    }
};