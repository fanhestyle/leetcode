//#include "s1.hpp"
#include "s2.hpp"

// int fib(int n) {}

int main()
{
    Solution solution;
    int n, r, e;

    // {
    //     n = 2;
    //     e = 1;
    //     r = solution.fib(n);
    //     ASSERT_EX(r == e, cerr << "e: " << e << ", r: " << r << endl);
    // }

    // {
    //     n = 3;
    //     e = 2;
    //     r = solution.fib(n);
    //     ASSERT_EX(r == e, cerr << "e: " << e << ", r: " << r << endl);
    // }

    {
        n = 4;
        e = 3;
        r = solution.fib(n);
        ASSERT_EX(r == e, cerr << "e: " << e << ", r: " << r << endl);
    }

    cout << "PASS!" << endl;
}