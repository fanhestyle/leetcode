#pragma once

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int evalRPN(vector<string>& tokens)
    {
        stack<int> intStack;

        for (auto ch : tokens)
        {
            if (ch == "+")
            {
                int b = intStack.top();
                intStack.pop();
                int a = intStack.top();
                intStack.pop();
                intStack.push(a + b);
            }
            else if (ch == "-")
            {
                int b = intStack.top();
                intStack.pop();
                int a = intStack.top();
                intStack.pop();
                intStack.push(a - b);
            }
            else if (ch == "*")
            {
                int b = intStack.top();
                intStack.pop();
                int a = intStack.top();
                intStack.pop();
                intStack.push(a * b);
            }
            else if (ch == "/")
            {
                int b = intStack.top();
                intStack.pop();
                int a = intStack.top();
                intStack.pop();
                intStack.push(a / b);
            }
            else
            {
                intStack.push(stoi(ch));
            }
        }
        return intStack.top();
    }
};