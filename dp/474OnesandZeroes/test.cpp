//#include "s1.hpp"
//#include "s2.hpp"
//#include "s3.hpp"
#include "s4.hpp"

// int findMaxForm(vector<string>& strs, int m, int n) {}
int main()
{
    Solution solution;
    vector<string> strs;
    int m, n, r, e;

    {
        strs = {"10", "0001", "111001", "1", "0"};
        m = 5;
        n = 3;
        e = 4;
        r = solution.findMaxForm(strs, m, n);
        ASSERT_EX(r == e, cerr << "e: " << e << ",r: " << r << endl);
    }

    {
        strs = {"10", "0", "1"};
        m = 1;
        n = 1;
        e = 2;
        r = solution.findMaxForm(strs, m, n);
        ASSERT_EX(r == e, cerr << "e: " << e << ",r: " << r << endl);
    }

    {
        strs = {"10", "0001", "111001", "1", "0"};
        m = 4;
        n = 3;
        e = 3;
        r = solution.findMaxForm(strs, m, n);

        ASSERT_EX(r == e, cerr << "e: " << e << ",r: " << r << endl);
    }

    {
        strs = {"111", "1000", "1000", "1000"};
        m = 9;
        n = 3;
        e = 3;
        r = solution.findMaxForm(strs, m, n);

        ASSERT_EX(r == e, cerr << "e: " << e << ",r: " << r << endl);
    }

    cout << "PASS!" << endl;
}