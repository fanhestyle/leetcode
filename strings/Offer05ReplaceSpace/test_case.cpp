#include "../../testutils/twodarray_equal.hpp"
//#include "s1.hpp"
#include "s2.hpp"

// string replaceSpace(string s)

int main()
{
    Solution solution;
    string s, r, e;

    {
        s = "We are happy.";
        e = "We%20are%20happy.";
        r = solution.replaceSpace(s);
        assert(e == r);
    }

    cout << "PASS!" << endl;
}