#include "s1.hpp"

// int longestCommonSubsequence(string text1, string text2) {
int main()
{
    Solution solution;
    string text1;
    string text2;
    int r, e;

    {
        text1 = "abcde";
        text2 = "ace";
        e = 3;
        r = solution.longestCommonSubsequence(text1, text2);
        ASSERT_EX(r == e, cerr << "e: " << e << ",r: " << r << endl);
    }

    {
        text1 = "abc";
        text2 = "abc";
        e = 3;
        r = solution.longestCommonSubsequence(text1, text2);
        ASSERT_EX(r == e, cerr << "e: " << e << ",r: " << r << endl);
    }

    {
        text1 = "abc";
        text2 = "def";
        e = 0;
        r = solution.longestCommonSubsequence(text1, text2);
        ASSERT_EX(r == e, cerr << "e: " << e << ",r: " << r << endl);
    }

    {
        text1 = "bl";
        text2 = "yby";
        e = 1;
        r = solution.longestCommonSubsequence(text1, text2);
        ASSERT_EX(r == e, cerr << "e: " << e << ",r: " << r << endl);
    }

    {
        text1 = "abcba";
        text2 = "abcbcba";
        e = 5;
        r = solution.longestCommonSubsequence(text1, text2);
        ASSERT_EX(r == e, cerr << "e: " << e << ",r: " << r << endl);
    }

    cout << "PASS!" << endl;
}