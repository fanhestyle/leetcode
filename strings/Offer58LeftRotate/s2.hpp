#pragma once

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string reverseLeftWords(string s, int n)
    {
        handleString(s, 0, n);
        return s;
    }

    void handleString(string& s, int start, int n)
    {
        int left = start;
        int right = start + n;
        while (right < s.length())
        {
            swap(s[left++], s[right++]);
        }

        if ((s.length() - start) % n != 0)
            handleString(s, left, n - (s.length() - start) % n);
    }
};