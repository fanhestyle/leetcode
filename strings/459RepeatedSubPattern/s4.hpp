#pragma once

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool repeatedSubstringPattern(string s)
    {
        int len = s.length();
        if (len <= 1)
            return false;

        vector<int> vec = getNext(s);

        if (vec[len] == 0)
            return false;
        else
            return len % (len - vec[len]) == 0;
    }

    vector<int> getNext(const string& s)
    {
        int len = s.length();
        vector<int> nextArray;
        nextArray.resize(len + 1);
        nextArray[0] = -1;

        int j = -1;
        int i = 0;

        while (i < len)
        {
            if (j == -1 || s[i] == s[j])
            {
                ++i;
                ++j;
                nextArray[i] = j;
            }
            else
            {
                j = nextArray[j];
            }
        }

        return nextArray;
    }
};