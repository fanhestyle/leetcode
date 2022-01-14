#pragma once

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string reverseLeftWords(string s, int n)
    {
        int len = s.length();
        string subPart = s.substr(0, n);
        for (int i = n; i < len; i++)
            s[i - n] = s[i];

        for (int i = 0; i < subPart.length(); i++)
            s[len - n + i] = subPart[i];

        return s;
    }
};