#include "../../testutils/debug.hpp"
#include "../../testutils/twodarray_equal.hpp"
#include "s1.hpp"

// vector<vector<int>> merge(vector<vector<int>>& intervals)

int main()
{
    Solution s;
    vector<vector<int>> intervals, r, e;

    {
        intervals = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};
        e = {{1, 6}, {8, 10}, {15, 18}};
        r = s.merge(intervals);
        assert(isEqual<int>(r, e));
    }

    {
        intervals = {{1, 4}, {4, 5}};
        e = {{1, 5}};
        r = s.merge(intervals);
        assert(isEqual<int>(r, e));
    }

    cout << "PASS!" << endl;
}