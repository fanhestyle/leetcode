#include "s1.hpp"

// int numDistinct(string s, string t) {

int main()
{
    Solution solution;
    string s, t;
    int r, e;

    {
        s = "rabbbit";
        t = "rabbit";
        e = 3;
        r = solution.numDistinct(s, t);
        ASSERT_EX(r == e, cerr << "e: " << e << ",r: " << r << endl);
    }

    {
        s = "babgbag";
        t = "bag";
        e = 5;
        r = solution.numDistinct(s, t);
        ASSERT_EX(r == e, cerr << "e: " << e << ",r: " << r << endl);
    }

    cout << "PASS!" << endl;
}