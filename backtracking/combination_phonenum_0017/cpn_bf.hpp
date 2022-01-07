#pragma once

#include <bits/stdc++.h>
using namespace std;


class Solution
{
public:
    static vector<string> letterCombinations(string digits) {
        if (digits.empty())
            return {};

        string subString(++digits.begin(), digits.end());
        vector<string> v = letterCombinations(subString);

        char ch = digits[0];
        vector<string> newV;

        if (v.size() == 0)
        {
            if (ch <= '7')
            {
                newV.push_back(string(1, char('a' + (ch - '2') * 3)));
                newV.push_back(string(1, char('a' + (ch - '2') * 3 + 1)));
                newV.push_back(string(1, char('a' + (ch - '2') * 3 + 2)));
            }

            if (ch == '7')
            {
                newV.push_back(string(1, char('a' + (ch - '2') * 3 + 3)));
            }

            if (ch >= '8')
            {
                newV.push_back(string(1, char('a' + (ch - '2') * 3 + 1)));
                newV.push_back(string(1, char('a' + (ch - '2') * 3 + 2)));
                newV.push_back(string(1, char('a' + (ch - '2') * 3 + 3)));
            }

            if (ch == '9')
                newV.push_back(string(1, char('a' + (ch - '2') * 3 + 4)));
        }
        else
        {
            if (ch <= '7')
            {
                for (int i = 0; i < v.size(); ++i)
                    newV.push_back(char('a' + (ch - '2') * 3) + v[i]);
                for (int i = 0; i < v.size(); ++i)
                    newV.push_back(char('a' + (ch - '2') * 3 + 1) + v[i]);
                for (int i = 0; i < v.size(); ++i)
                    newV.push_back(char('a' + (ch - '2') * 3 + 2) + v[i]);
            }

            if (ch == '7')
            {
                for (int i = 0; i < v.size(); ++i)
                    newV.push_back(char('a' + (ch - '2') * 3 + 3) + v[i]);
            }

            if (ch >= '8')
            {
                for (int i = 0; i < v.size(); ++i)
                    newV.push_back(char('a' + (ch - '2') * 3 + 1) + v[i]);
                for (int i = 0; i < v.size(); ++i)
                    newV.push_back(char('a' + (ch - '2') * 3 + 2) + v[i]);
                for (int i = 0; i < v.size(); ++i)
                    newV.push_back(char('a' + (ch - '2') * 3 + 3) + v[i]);
            }

            if (ch == '9')
            {
                for (int i = 0; i < v.size(); ++i)
                    newV.push_back(char('a' + (ch - '2') * 3 + 4) + v[i]);
            }
        }
        return newV;
    }
};