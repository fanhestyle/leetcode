/*

Input: s = "the sky is blue"
Output: "blue is sky the"

string reverseWords(string s)
 */

//#include "s1.hpp"
#include "s2.hpp"

int main()
{
    Solution solution;
    string s, r, e;

    // {
    //     s = "the sky is blue";
    //     e = "blue is sky the";
    //     r = solution.reverseWords(s);
    //     assert(r == e);
    // }
    {
        s = " hi  ";
        e = "hi";
        r = solution.reverseWords(s);
        assert(r == e);
    }

    {
        s = "  hello world  ";
        e = "world hello";
        r = solution.reverseWords(s);
        assert(r == e);
    }

    {
        s = "a good   example";
        e = "example good a";
        r = solution.reverseWords(s);
        assert(r == e);
    }

    {
        s = "  Bob    Loves  Alice   ";
        e = "Alice Loves Bob";
        r = solution.reverseWords(s);
        assert(r == e);
    }

    cout << "PASS!" << endl;
}