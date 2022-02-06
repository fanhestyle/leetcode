//#include "s1.hpp"
#include "s2.hpp"

// int numTrees(int n) {

int main()
{
    Solution solution;
    int n, r, e;

    {
        n = 3;
        e = 5;
        r = solution.numTrees(n);
        ASSERT_EX(r == e, cerr << "e:" << e << ",r:" << r << endl);
    }
    {
        n = 1;
        e = 1;
        r = solution.numTrees(n);
        ASSERT_EX(r == e, cerr << "e:" << e << ",r:" << r << endl);
    }

    cout << "PASS!" << endl;
}