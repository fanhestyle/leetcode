//#include "s1.hpp"
//#include "s2.hpp"
#include "s3.hpp"

// int climbStairs(int n)

int main()
{
    Solution solution;
    int n, r, e;

    {
        n = 2;
        e = 2;
        r = solution.climbStairs(n);
        ASSERT_EX(r == e, cerr << "e: " << e << ", r: " << r << endl);
    }

    {
        n = 3;
        e = 3;
        r = solution.climbStairs(n);
        ASSERT_EX(r == e, cerr << "e: " << e << ", r: " << r << endl);
    }

    cout << "PASS!" << endl;
}