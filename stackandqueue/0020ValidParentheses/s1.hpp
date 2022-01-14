#pragma once

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> chstack;
        for (auto i : s)
        {
            switch (i)
            {
                case '(':
                case '[':
                case '{':
                    chstack.push(i);
                    break;

                case ')':
                    if (chstack.empty())
                        return false;
                    if (chstack.top() != '(')
                        return false;
                    chstack.pop();
                    break;
                case ']':
                    if (chstack.empty())
                        return false;
                    if (chstack.top() != '[')
                        return false;
                    chstack.pop();
                    break;

                case '}':
                    if (chstack.empty())
                        return false;
                    if (chstack.top() != '{')
                        return false;
                    chstack.pop();
                    break;

                default:
                    break;
            }
        }

        if (chstack.empty())
            return true;
        return false;
    }
};