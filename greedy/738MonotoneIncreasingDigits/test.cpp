#include "../../testutils/debug.hpp"
#include "../../testutils/twodarray_equal.hpp"
#include "s1.hpp"

//    int monotoneIncreasingDigits(int n) {

int main()
{
    Solution s;
    int n, r, e;

    {
        n = 10;
        e = 9;
        r = s.monotoneIncreasingDigits(n);
        assert(r == e);
    }

    {
        n = 1234;
        e = 1234;
        r = s.monotoneIncreasingDigits(n);
        assert(r == e);
    }

    {
        n = 332;
        e = 299;
        r = s.monotoneIncreasingDigits(n);
        assert(r == e);
    }

    {
        n = 100;
        e = 99;
        r = s.monotoneIncreasingDigits(n);
        assert(r == e);
    }

    cout << "PASS!" << endl;
}