#pragma once

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string replaceSpace(string s)
    {
        int j = s.length() - 1;
        for (int i = 0; i <= j; i++)
        {
            if (s[i] == ' ')
                s += "  ";
        }
        int i = s.length() - 1;
        while (i >= 0)
        {
            if (s[j] == ' ')
            {
                s[i--] = '0';
                s[i--] = '2';
                s[i] = '%';
            }
            else
            {
                s[i] = s[j];
            }
            j--;
            i--;
        }

        return s;
    }
};