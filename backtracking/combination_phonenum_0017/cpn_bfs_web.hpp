#pragma once

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    static vector<string> letterCombinations(string digits)
    {
        if (digits.empty())
            return {};

        const vector<string> table = {"",    "",    "abc",  "def", "ghi",
                                      "jkl", "mno", "pqrs", "tuv", "wxyz"};

        queue<string> strQueue;
        vector<string> result;

        char firstCh = digits[0];
        string firstString = table[firstCh - '0'];

        for (auto ch : firstString)
            strQueue.push(string(1, ch));

        for (int i = 1; i < digits.size(); i++)
        {
            string otherstring = table[digits[i] - '0'];

            while (strQueue.front().size() <= i)
            {
                string queueHead = strQueue.front();

                for (int j = 0; j < otherstring.size(); j++)
                {
                    string prefix = queueHead;
                    prefix += otherstring[j];
                    strQueue.push(prefix);
                }

                strQueue.pop();
            }
        }

        while (!strQueue.empty())
        {
            result.push_back(strQueue.front());
            strQueue.pop();
        }

        return result;
    }
};