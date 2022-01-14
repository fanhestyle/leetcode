#pragma once

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string reverseStr(string s, int k)
    {
        int n = s.length() / k;

        int i = 0;

        for (; i < n; i += 2)
        {
            reverse(s.begin() + i * k, s.begin() + k * (i + 1));
        }

        if (n % 2 == 0)
        {
            reverse(s.begin() + i * k, s.end());
        }

        return s;
    }
};