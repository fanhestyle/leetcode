#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    static vector<string> generateParenthesis(int n)
    {
        std::vector<string> result;
        std::queue<string> chqueue;

        chqueue.push("(");
        chqueue.push(")");

        for (int i = 2; i <= n * 2; i++)
        {
            while (chqueue.front().size() < i)
            {
                std::string str = chqueue.front();
                chqueue.pop();

                chqueue.push(str + "(");
                chqueue.push(str + ")");
            }
        }

        while (!chqueue.empty())
        {
            if (isValidString(chqueue.front()))
                result.push_back(chqueue.front());
            chqueue.pop();
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