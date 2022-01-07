#include <bits/stdc++.h>
using namespace std;

/*
    本道题和数字电话号码那道题几乎一模一样，电话数字是 2 对应“abc” 3对应"def"
    这道题可以看成是每一个数字对应 "()"
    两者差异：这道题可以剪枝，电话号码那道题不需要剪枝（因为括号判断是由一些约束条件可以进行剪枝）
*/


/*
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
*/

class Solution
{
public:

    static vector<string> generateParenthesis(int n)
    {
        vector<string> result;

        dfs(result, "", n*2, 0);

        return result;
    }

    static bool isValidString(const std::string& str)
    {
        std::stack<char> chstack;
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == '(')
            {
                if (!chstack.empty() && chstack.top() == ')')
                    return false;
                chstack.push(str[i]);
            }

            else
            {
                if (chstack.empty())
                    return false;
                chstack.pop();
            }
        }
        return chstack.empty();
    }

    static void dfs(std::vector<std::string>& result, std::string str, int n,
                    int startIndex)
    {
        if (str.size() == n)
        {
            if(isValidString(str))
            result.push_back(str);
            return;
        }

        char choice[2] = {'(',')'};

        for (auto it : choice)
        {
            str += it;
            dfs(result, str, n, startIndex + 1);
            str.pop_back();
        }
    }
};