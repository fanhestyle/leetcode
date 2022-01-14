#pragma once

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string reverseWords(string s)
    {
        if (s.empty() || s.length() == 1)
            return s;

        eraseExtraSpace(s);
        reverseString(s, 0, s.length()-1);
        flipString(s);

        return s;
    }

    void eraseExtraSpace(string& s)
    {
        int left = 0, right = 0;

        while (s[right] == ' ' && right < s.length())
        {
            right++;
        }

        while (right < s.length())
        {
            char curRight = s[right];

            if (right > 1 && curRight == ' ' && s[right - 1] == ' ')
            {
                right++;
            }
            else
            {
                s[left] = s[right];
                left++;
                right++;
            }
        }

        if (left > 1 && s[left-1] == ' ')
        {
            s.resize(left - 1);
        }
        else
        {
            s.resize(left);
        }
    }

    void reverseString(string& s, int left, int right)
    {
        while (left < right)
            swap(s[left++], s[right--]);
    }

    void flipString(string& s)
    {
        int left = 0, right = 0;
        while (right < s.length())
        {
            char ch = s[right];
            ++right;
            if (ch == ' ')
            {
                reverseString(s, left, right - 2);
                left = right;
            }
        }
        reverseString(s, left, s.length()-1);
    }
};