#pragma once

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    static vector<string> letterCombinations(string digits)
    {
        const vector<string> table = {"",    "",    "abc",  "def", "ghi",
                                      "jkl", "mno", "pqrs", "tuv", "wxyz"};

        vector<string> result{""};

        for (auto it : digits)
        {
            vector<string> tmp;

            for (auto s : table[it])
            {
                for (auto g : tmp)
                {
                    tmp.push_back(g + it);
                }
            }
            swap(result, tmp);
        }

        return result;
    }
};