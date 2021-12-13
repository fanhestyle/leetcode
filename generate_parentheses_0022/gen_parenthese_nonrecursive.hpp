#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    static vector<string> generateParenthesis(int n)
    {
        std::vector<string> vec{"(", ")"};

        for (int i = 2; i <= n * 2; i++)
        {
            std::vector<string> tmp;
            for (int j = 0; j < vec.size(); ++j)
            {
                tmp.push_back(vec[j] + "(");
                tmp.push_back(vec[j] + ")");
            }
            swap(tmp, vec);
        }

        std::vector<std::string> result;
        for (auto it : vec)
        {
            if (isValidString(it))
                result.push_back(it);
        }
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
};