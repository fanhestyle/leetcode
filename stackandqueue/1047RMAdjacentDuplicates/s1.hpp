#pragma once

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string removeDuplicates(string s)
    {
        stack<char> chs;

        for (char ch : s)
        {
            if (chs.empty() || ch != chs.top())
            {
                chs.push(ch);
            }
            else
                chs.pop();
        }

        string result(chs.size(), ' ');
        for (auto it = result.rbegin(); it != result.rend(); it++)
        {
            *it = chs.top();
            chs.pop();
        }
        return result;
    }
};