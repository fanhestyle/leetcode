#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    static vector<string> generateParenthesis(int n)
    {
        std::vector<std::string> result;
        int cnt = 0;
        dfs(result, "", 2 * n, 1, cnt);
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
                    int startIndex, int cnt)
    {
        if (str.length() == n)
        {
            if (isValidString(str))
                result.push_back(str);
            return;
        }

        for (int i = startIndex; i <= n; i++)
        {
            for (int j = 0; j <= 1; j++)
            {
                if (j == 0)
                {
                    str += "(";
                }
                else
                {
                    str += ")";
                    cnt++;
                }
                if (cnt * 2 > str.length())
                    continue;

                if (find(result.begin(), result.end(), str) == result.end())
                {
                    dfs(result, str, n, startIndex + 1,cnt);
                    str.pop_back();
                }
            }
        }
    }
};