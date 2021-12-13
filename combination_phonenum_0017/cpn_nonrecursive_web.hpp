#pragma once

#include <bits/stdc++.h>
using namespace std;

/*
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};
        vector<string> result;
        result.push_back("");

        for(auto digit: digits) {
            vector<string> tmp;
            for(auto candidate: pad[digit - '0']) {
                for(auto s: result) {
                    tmp.push_back(s + candidate);
                }
            }
            result.swap(tmp);
        }
        return result;
    }
*/

class Solution
{
public:
public:
    static vector<string> letterCombinations(string digits)
    {
        if (digits.empty())
            return {};

        const vector<string> pad = {"",    "",    "abc",  "def", "ghi",
                                    "jkl", "mno", "pqrs", "tuv", "wxyz"};

        vector<string> result;
        result.push_back("");

        for (auto digit : digits)
        {
            vector<string> tmp;
            for (auto s : result)
            {
                for (auto candidate : pad[digit - '0'])
                {
                    tmp.push_back(s + candidate);
                }
            }
            result.swap(tmp);
        }
        return result;
    }

    //     static vector<string> letterCombinations(string digits)
    //     {
    //         const vector<string> table = {"",    "",    "abc",  "def", "ghi",
    //                                       "jkl", "mno", "pqrs", "tuv",
    //                                       "wxyz"};
    //         if (digits.empty()) return {};
    // 		vector<string> result;
    //         result.push_back("");

    //         for(auto digit: digits) {
    //             vector<string> tmp;
    //             for(auto candidate: table[digit - '0']) {
    //                 for(auto s: result) {
    //                     tmp.push_back(s + candidate);
    //                 }
    //             }
    //             result.swap(tmp);
    //         }
    //         return result;

    // /*
    //         if (digits.empty()) return {};

    //         vector<string> result;
    //         result.push_back("");

    //         for (auto it : digits)
    //         {
    //             vector<string> tmp;

    //             for (auto s : table[it-'0'])
    //             {
    //                 for (auto g : result)
    //                 {
    //                     tmp.push_back(g + s);
    //                 }
    //             }
    //             result.swap(tmp);
    //         }

    //         return result;
    //             */
    //     }
};