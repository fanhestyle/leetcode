//#include "s1.hpp"
#include "s2.hpp"

// bool wordBreak(string s, vector<string>& wordDict) {

int main()
{
    Solution solution;
    string s;
    vector<string> wordDict;
    bool r, e;

    {
        s = "leetcode";
        wordDict = {"leet", "code"};
        e = true;
        r = solution.wordBreak(s, wordDict);
        ASSERT_EX(r == e, cerr << "e: " << e << ",r: " << r << endl);
    }

    {
        s = "applepenapple";
        wordDict = {"apple", "pen"};
        e = true;
        r = solution.wordBreak(s, wordDict);
        ASSERT_EX(r == e, cerr << "e: " << e << ",r: " << r << endl);
    }

    {
        s = "catsandog";
        wordDict = {"cats", "dog", "sand", "and", "cat"};
        e = false;
        r = solution.wordBreak(s, wordDict);
        ASSERT_EX(r == e, cerr << "e: " << e << ",r: " << r << endl);
    }
    cout << "PASS!" << endl;
}