//#include "s1.hpp"
#include "s2.hpp"

// int longestPalindromeSubseq(string s) {

int main()
{
    Solution solution;
    string s;
    int r, e;

    {
        s = "bbbab";
        e = 4;
        r = solution.longestPalindromeSubseq(s);
        ASSERT_EX(r == e, cerr << "e: " << e << ",r: " << r << endl);
    }

    {
        s = "cbbd";
        e = 2;
        r = solution.longestPalindromeSubseq(s);
        ASSERT_EX(r == e, cerr << "e: " << e << ",r: " << r << endl);
    }

    cout << "PASS!" << endl;
}