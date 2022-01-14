#pragma once

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string replaceSpace(string s)
    {
        string result;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == ' ')
            {
                result.push_back('%');
                result.push_back('2');
                result.push_back('0');
            }
            else
                result.push_back(s[i]);
        }

        return result;
    }
};