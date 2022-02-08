#include "s1.hpp"

// int countSubstrings(string s) {}

int main()
{
    Solution solution;
    string s;
    int r, e;

    {
        s = "abc";
        e = 3;
        r = solution.countSubstrings(s);
        ASSERT_EX(r == e, cerr << "e: " << e << ",r: " << r << endl);
    }

    {
        s = "aaa";
        e = 6;
        r = solution.countSubstrings(s);
        ASSERT_EX(r == e, cerr << "e: " << e << ",r: " << r << endl);
    }

    cout << "PASS!" << endl;
}