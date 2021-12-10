#pragma once

#include <bits/stdc++.h>
using namespace std;

/*
class Solution {
public:
    vector<string> letterCombinations(string digits) {
        unordered_map<char, string> table{
            {'0', " "}, {'1',"*"}, {'2', "abc"},
            {'3',"def"}, {'4',"ghi"}, {'5',"jkl"},
            {'6',"mno"}, {'7',"pqrs"},{'8',"tuv"},
            {'9',"wxyz"}};
        vector<string> res;
        if(digits == "") return res;
        func(res, "", digits, table, 0);
        return res;
    }

    void func(
        vector<string> &res,
        string str,
        string &digits,
        unordered_map<char, string> &m,
        int k)
    {

            if(str.size() == digits.size()){
            res.push_back(str);
            return;
        }
        string tmp = m[digits[k]];
        for(char w : tmp){
            str += w;
            func(res, str, digits, m, k+1);
            str.pop_back();
        }
        return ;
    }
};

*/

class Solution
{
public:
    static vector<string> letterCombinations(string digits)
    {
        const vector<string> table = {"",    "",    "abc",  "def", "ghi",
                                      "jkl", "mno", "pqrs", "tuv", "wxyz"};

        if (digits.empty())
            return {};

        vector<string> result;

        dfs(result, "", digits, table, 0);

        return result;
    }

    // startIndex是digits的第一个字符（比如'23'中的第一个'2'，索引号是0）
    static void dfs(vector<string>& result, string str, string& digits,
                    const vector<string>& table, int startIndex)
    {
        if (str.size() == digits.size())
        {
            result.push_back(str);
            return;
        }

        string tmp = table[digits[startIndex] - '0'];

        for (auto it : tmp)
        {
            str += it;
            dfs(result, str, digits, table, startIndex + 1);
            str.pop_back();
        }
    }
};