/*
Example 1:
Input: s = "ab#c", t = "ad#c"
Output: true
Explanation: Both s and t become "ac".

Example 2:
Input: s = "ab##", t = "c#d#"
Output: true
Explanation: Both s and t become "".

Example 3:
Input: s = "a#c", t = "b"
Output: false
Explanation: s becomes "c" while t becomes "b".

bool backspaceCompare(string s, string t)
*/

//#include "s1.hpp"
#include "s2.hpp"

int main()
{
    Solution solution;
    bool result, expected;
    string s, t;

    {
        s = "ab#c";
        t = "ad#c";
        expected = true;
        result = solution.backspaceCompare(s, t);
        assert(expected == result);
    }

    {
        s = "ab##";
        t = "c#d#";
        expected = true;
        result = solution.backspaceCompare(s, t);
        assert(expected == result);
    }

    {
        s = "a#c";
        t = "b";
        expected = false;
        result = solution.backspaceCompare(s, t);
        assert(expected == result);
    }

    cout << "PASS!" << endl;
}