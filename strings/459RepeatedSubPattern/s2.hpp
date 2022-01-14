#pragma once

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool repeatedSubstringPattern(string s)
    {
        int len = s.length();

        for (int i = 1; i * 2 <= len; i++)
        {
            if (len % i == 0)
            {
                bool isValid = true;
                for (int j = i; j < len; j++)
                {
                    if (s[j] != s[j - i])
                    {
                        isValid = false;
                        break;
                    }
                }
                if (isValid)
                    return true;
            }
        }

        return false;
    }
};