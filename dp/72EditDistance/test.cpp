#include "s1.hpp"

// int minDistance(string word1, string word2) {

int main()
{
    Solution solution;
    string word1;
    string word2;
    int r, e;

    {
        word1 = "horse";
        word2 = "ros";
        e = 3;
        r = solution.minDistance(word1, word2);
        ASSERT_EX(r == e, cerr << "e: " << e << ",r: " << r << endl);
    }
    {
        word1 = "intention";
        word2 = "execution";
        e = 5;
        r = solution.minDistance(word1, word2);
        ASSERT_EX(r == e, cerr << "e: " << e << ",r: " << r << endl);
    }

    cout << "PASS!" << endl;
}