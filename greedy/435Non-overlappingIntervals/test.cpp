#include "../../testutils/debug.hpp"
#include "s1.hpp"

//    int eraseOverlapIntervals(vector<vector<int>>& intervals) {

int main()
{
    Solution s;
    vector<vector<int>> intervals;
    int r, e;

    {
        intervals = {{1, 2}, {2, 3}, {3, 4}, {1, 3}};
        e = 1;
        r = s.eraseOverlapIntervals(intervals);
        assert(r == e);
    }

    {
        intervals = {{1, 2}, {1, 2}, {1, 2}};
        e = 2;
        r = s.eraseOverlapIntervals(intervals);
        assert(r == e);
    }

    {
        intervals = {{1, 2}, {2, 3}};
        e = 0;
        r = s.eraseOverlapIntervals(intervals);
        assert(r == e);
    }

    {
        intervals = {{-52, 31},  {-73, -26}, {82, 97}, {-65, -11},
                     {-62, -49}, {95, 99},   {58, 95}, {-31, 49},
                     {66, 98},   {-63, 2},   {30, 47}, {-40, -26}};
        e = 7;
        r = s.eraseOverlapIntervals(intervals);
        ASSERT_EX(r == e,
                  cerr << "expected: " << e << ", result: " << r << endl);
    }

    cout << "PASS!" << endl;
}