#pragma once

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string reverseWords(string s)
    {
        string result;
        //去掉尾部空格
        while (s.back() == ' ')
        {
            s.pop_back();
        }

        //去掉头部空格
        while (s[0] == ' ')
        {
            s = s.substr(1, s.size() - 1);
        }

        int left = 0, right = 0;
        while (right < s.length())
        {
            right++;

            if (s[right] == ' ')
            {
                string subString = s.substr(left, right - left);
                result = subString + result;
                result = " " + result;

                while (s[right] == ' ')
                {
                    right++;
                }
                left = right;
            }
        }

        result = s.substr(left, s.length() - left) + result;

        return result;
    }
};