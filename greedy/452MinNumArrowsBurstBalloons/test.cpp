#include "../../testutils/debug.hpp"
#include "../../testutils/twodarray_equal.hpp"
#include "s1.hpp"

//    int findMinArrowShots(vector<vector<int>>& points)

int main()
{
    Solution s;
    vector<vector<int>> points;
    int r, e;

    {
        points = {{10, 16}, {2, 8}, {1, 6}, {7, 12}};
        e = 2;
        r = s.findMinArrowShots(points);
        ASSERT_EX(r == e,
                  cerr << "expected: " << e << ", result: " << r << endl);
    }
    {
        points = {{1, 2}, {3, 4}, {5, 6}, {7, 8}};
        e = 4;
        r = s.findMinArrowShots(points);

        ASSERT_EX(r == e,
                  cerr << "expected: " << e << ", result: " << r << endl);
    }
    {
        points = {{1, 2}, {2, 3}, {3, 4}, {4, 5}};
        e = 2;
        r = s.findMinArrowShots(points);

        ASSERT_EX(r == e,
                  cerr << "expected: " << e << ", result: " << r << endl);
    }

    {
        points = {{3, 9}, {7, 12}, {3, 8}, {6, 8}, {9, 10},
                  {2, 9}, {0, 9},  {3, 9}, {0, 6}, {2, 8}};
        e = 2;
        r = s.findMinArrowShots(points);

        ASSERT_EX(r == e,
                  cerr << "expected: " << e << ", result: " << r << endl);
    }

    {
        points = {{9, 12}, {1, 10}, {4, 11}, {8, 12}, {3, 9}, {6, 9}, {6, 7}};
        e = 2;
        r = s.findMinArrowShots(points);

        ASSERT_EX(r == e,
                  cerr << "expected: " << e << ", result: " << r << endl);
    }

    cout << "PASS!" << endl;
}