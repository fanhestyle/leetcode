#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    static vector<string> generateParenthesis(int n)
    {
        std::vector<std::string> result;
        dfs(result, "", 0, 0, n);

        return result;
    }

    static void dfs(std::vector<std::string>& result, std::string str, int left,
                    int right, int n)
    {
        if (str.length() == 2 * n)
        {
            result.push_back(str);
            return;
        }

        if (left < n)
        {
            str += "(";
            dfs(result, str, left + 1, right, n);
            str.pop_back();
        }
        if (right < left)
        {
            str += ")";
            dfs(result, str, left, right + 1, n);
            str.pop_back();
        }
    }
};