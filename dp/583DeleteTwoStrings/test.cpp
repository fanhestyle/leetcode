#include "s1.hpp"

// int minDistance(string word1, string word2) {

int main()
{
    Solution solution;
    string word1, word2;
    int r, e;

    {
        word1 = "sea";
        word2 = "eat";
        e = 2;
        r = solution.minDistance(word1, word2);
        ASSERT_EX(r == e, cerr << "e: " << e << ",r: " << r << endl);
    }

    {
        word1 = "leetcode";
        word2 = "etco";
        e = 4;
        r = solution.minDistance(word1, word2);
        ASSERT_EX(r == e, cerr << "e: " << e << ",r: " << r << endl);
    }

    cout << "PASS!" << endl;
}