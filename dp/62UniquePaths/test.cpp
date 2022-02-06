//#include "s1.hpp"
//#include "s2.hpp"
//#include "s3.hpp"
#include "s4.hpp"


// int uniquePaths(int m, int n) {

int main()
{
    Solution solution;
    int m, n, r, e;

    {
        m = 3;
        n = 7;
        e = 28;
        r = solution.uniquePaths(m, n);
        ASSERT_EX(r == e, cerr << "e: " << e << ",r: " << r << endl);
    }

    {
        m = 3;
        n = 2;
        e = 3;
        r = solution.uniquePaths(m, n);
        ASSERT_EX(r == e, cerr << "e: " << e << ",r: " << r << endl);
    }

    cout << "PASS!" << endl;
}