//#include "s1.hpp"
//#include "s2.hpp"
#include "s3.hpp"

// int largestRectangleArea(vector<int>& heights) {

int main()
{
    Solution solution;

    vector<int> heights;
    int r, e;

    {
        heights = {2, 1, 5, 6, 2, 3};
        e = 10;
        r = solution.largestRectangleArea(heights);
        ASSERT_EX(r == e, cerr << "e: " << e << ",r: " << r << endl);
    }

    {
        heights = {2, 4};
        e = 4;
        r = solution.largestRectangleArea(heights);
        ASSERT_EX(r == e, cerr << "e: " << e << ",r: " << r << endl);
    }

    cout << "PASS!" << endl;
}