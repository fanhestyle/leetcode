/*
bool repeatedSubstringPattern(string s)

Input: s = "abab"
Output: true
*/

//#include "s1.hpp"
//#include "s2.hpp"
//#include "s3.hpp"
#include "s4.hpp"

int main()
{
    Solution solution;
    string s;
    bool r, e;

    {
        s = "abab";
        r = solution.repeatedSubstringPattern(s);
        e = true;
        assert(r == e);
    }

    {
        s = "aba";
        r = solution.repeatedSubstringPattern(s);
        e = false;
        assert(r == e);
    }

    {
        s = "abcabcabcabc";
        r = solution.repeatedSubstringPattern(s);
        e = true;
        assert(r == e);
    }

    {
        s = "abaababaab";
        r = solution.repeatedSubstringPattern(s);
        e = true;
        assert(r == e);
    }

    {
        s = "aabaaba";
        r = solution.repeatedSubstringPattern(s);
        e = false;
        assert(r == e);
    }

    {
        s = "abac";
        r = solution.repeatedSubstringPattern(s);
        e = false;
        assert(r == e);
    }

    cout << "PASS!" << endl;
}