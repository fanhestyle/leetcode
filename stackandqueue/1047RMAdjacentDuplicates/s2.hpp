#pragma once

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string removeDuplicates(string s)
    {
        string result;
        for (char ch : s)
        {
            if (result.empty() || ch != result.back())
            {
                result.push_back(ch);
            }
            else
                result.pop_back();
        }
        return result;
    }
};