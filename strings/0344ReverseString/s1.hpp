#pragma once

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void reverseString(vector<char>& s)
    {
        if (s.empty() || s.size() == 1)
            return;

        int left = 0, right = s.size() - 1;
        while (left < right)
        {
            char tmp = s[left];
            s[left++] = s[right];
            s[right--] = tmp;
        }
    }
};
