#include "../../testutils/twodarray_equal.hpp"
#include "s1.hpp"

/*
string reverseStr(string s, int k)

Input: s = "abcdefg", k = 2
Output: "bacdfeg"

Input: s = "abcd", k = 2
Output: "bacd"
*/

int main()
{
    Solution solution;
    string s, r, e;
    int k;

    {
        k = 2;
        s = "abcdefg";
        e = "bacdfeg";
        r = solution.reverseStr(s, k);
        assert(e == r);
    }

    {
        k = 2;
        s = "abcd";
        e = "bacd";
        r = solution.reverseStr(s, k);
        assert(e == r);
    }

    {
        k = 8;
        s = "abcdefg";
        e = "gfedcba";
        r = solution.reverseStr(s, k);
        assert(e == r);
    }

    cout << "PASS!" << endl;
}