//#include "s1.hpp"
#include "s2.hpp"
//
// int integerBreak(int n) {}

int main()
{
    Solution solution;
    int n;
    int r, e;

    {
        n = 2;
        e = 1;
        r = solution.integerBreak(n);
        ASSERT_EX(r == e, cerr << "e: " << e << ",r: " << r << endl);
    }

    {
        n = 10;
        e = 36;
        r = solution.integerBreak(n);
        ASSERT_EX(r == e, cerr << "e:" << e << ",r: " << r << endl);
    }

    cout << "PASS!" << endl;
}