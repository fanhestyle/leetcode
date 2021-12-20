#include "../testutils/twodarray_equal.hpp"
#include "subsets_1.hpp"

int main()
{
    Solution solution;
    vector<int> nums;
    vector<vector<int>> result, expected;

    {
        nums = {1, 2, 2};
        expected = {{{}, {1}, {1, 2}, {1, 2, 2}, {2}, {2, 2}}};
        result = solution.subsetsWithDup(nums);
        assert(isEqual(expected, result));
    }

    {
        nums = {0};
        expected = {{}, {0}};
        result = solution.subsetsWithDup(nums);
        assert(isEqual(expected, result));
    }

    cout << "PASS!" << endl;
}