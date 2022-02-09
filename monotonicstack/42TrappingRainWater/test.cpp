//#include "s1.hpp"
//#include "s2.hpp"
//#include "s3.hpp"
#include "s4.hpp"

// int trap(vector<int>& height) {

int main()
{
    Solution solution;

    vector<int> height;
    int r, e;

    {
        height = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
        e = 6;
        r = solution.trap(height);
        ASSERT_EX(r == e, cerr << "e: " << e << ",r: " << r << endl);
    }

    {
        height = {4, 2, 0, 3, 2, 5};
        e = 9;
        r = solution.trap(height);
        ASSERT_EX(r == e, cerr << "e: " << e << ",r: " << r << endl);
    }

    {
        height = {4, 2, 3};
        e = 1;
        r = solution.trap(height);
        ASSERT_EX(r == e, cerr << "e: " << e << ",r: " << r << endl);
    }

    {
        height = {0, 7, 1, 4, 6};
        e = 7;
        r = solution.trap(height);
        ASSERT_EX(r == e, cerr << "e: " << e << ",r: " << r << endl);
    }

    cout << "PASS!" << endl;
}
