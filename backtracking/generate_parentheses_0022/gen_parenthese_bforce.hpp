#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    static vector<string> generateParenthesis(int n)
    {
        std::vector<std::string> result;
        dfs(result, "", 2 * n, 1);
        return result;
    }

    static bool isValidString(const std::string& str, bool isPartial = true)
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
        if (isPartial)
            return true;
        else
        {
            if (chstack.empty())
                return true;
            else
                return false;
        }
    }

    static void dfs(std::vector<std::string>& result, std::string str, int n,
                    int startIndex)
    {
        if (str.length() == n)
        {
            if (isValidString(str, false))
                result.push_back(str);
            return;
        }

        for (int i = startIndex; i <= n; i++)
        {
            str += "(";
            if (std::find(result.begin(), result.end(), str) ==
                    std::end(result) &&
                isValidString(str))
            {
                dfs(result, str, n, startIndex + 1);
                str.pop_back();
            }

            str += ")";
            if (std::find(result.begin(), result.end(), str) ==
                    std::end(result) &&
                isValidString(str))
            {
                dfs(result, str, n, startIndex + 1);
                str.pop_back();
            }
        }
    }
};