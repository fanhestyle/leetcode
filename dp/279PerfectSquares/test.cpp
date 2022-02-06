#include "s1.hpp"

// int numSquares(int n) {

int main()
{
    Solution solution;
    int n;
    int r, e;

    {
        n = 12;
        e = 3;
        r = solution.numSquares(n);
        ASSERT_EX(r == e, cerr << "e: " << e << ",r: " << r << endl);
    }

    {
        n = 13;
        e = 2;
        r = solution.numSquares(n);
        ASSERT_EX(r == e, cerr << "e: " << e << ",r: " << r << endl);
    }

    {
        n = 5;
        e = 2;
        r = solution.numSquares(n);
        ASSERT_EX(r == e, cerr << "e: " << e << ",r: " << r << endl);
    }

    cout << "PASS!" << endl;
}