/*

Input: s = "ADOBECODEBANC", t = "ABC"
Output: "BANC"

Input: s = "a", t = "a"
Output: "a"

Input: s = "a", t = "aa"
Output: ""

string minWindow(string s, string t)
*/

//#include "s1.hpp"
#include "s2.hpp"

int main()
{
    Solution solution;
    string s, t, expected, result;

    {
        s = "ADOBECODEBANC";
        t = "ABC";
        expected = "BANC";
        result = solution.minWindow(s, t);
        assert(expected == result);
    }

    {
        s = "a";
        t = "a";
        expected = "a";
        result = solution.minWindow(s, t);
        assert(expected == result);
    }

    {
        s = "a";
        t = "aa";
        expected = "";
        result = solution.minWindow(s, t);
        assert(expected == result);
    }

    cout << "PASS!" << endl;
}