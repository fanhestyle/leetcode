/*
Input: tokens = ["2","1","+","3","*"]
Output: 9

Input: tokens = ["4","13","5","/","+"]
Output: 6
int evalRPN(vector<string>& tokens)
*/

#include "s1.hpp"

int main()
{
    Solution s;
    vector<string> tokens;
    int r, e;

    {
        tokens = {"2", "1", "+", "3", "*"};
        e = 9;
        r = s.evalRPN(tokens);
        assert(r == e);
    }

    {
        tokens = {"4", "13", "5", "/", "+"};
        e = 6;
        r = s.evalRPN(tokens);
        assert(r == e);
    }

    {
        tokens = {"10","6","9","3","+","-11","*","/","*","17","+","5","+"};
        e = 22;
        r = s.evalRPN(tokens);
        assert(r == e);
    }

    cout << "PASS!" << endl;
}