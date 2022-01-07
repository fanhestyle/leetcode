/*
void moveZeroes(vector<int>& nums)
*/

#include "../../testutils/twodarray_equal.hpp"
#include "s1.hpp"

int main()
{
    Solution solution;
    vector<int> nums;
    vector<int> expected;

    {
        nums = {0, 1, 0, 3, 12};
        expected = {1, 3, 12, 0, 0};
        solution.moveZeroes(nums);
        assert(isArrayEqual<int>(expected, nums));
    }

    {
        nums = {0};
        expected = {0};
        solution.moveZeroes(nums);
        assert(isArrayEqual<int>(expected, nums));
    }

    {
        nums = {1};
        expected = {1};
        solution.moveZeroes(nums);
        assert(isArrayEqual<int>(expected, nums));
    }

    cout << "PASS!" << endl;
}