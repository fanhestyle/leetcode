/*
给定一个数组 {3, 1, 2, 1} 和一个数字k
=4。求这个数组的一个最长连续子数组，这个最长连续子数组中所有数字的必须小于或等于k
例如，上面这个例子中，连续子数组有这么多种情况：
{3}, {1}, {2}, {1}, {3, 1}, {1, 2}, {2, 1}, {3, 1, 2}, {1, 2, 1}, {3, 1, 2, 1}
其中符合条件的就只有{1, 2, 1}

vector<int> maximumSubArraySum(vector<int>& nums, int target)
*/

#include "../../testutils/twodarray_equal.hpp"

//#include "s1.hpp"
#include "s2.hpp"

int main()
{
    Solution solution;
    vector<int> nums;
    vector<int> expected, result;
    int target;

    {
        nums = {3, 1, 2, 1};
        target = 4;
        expected = {1, 2, 1};
        result = solution.maximumSubArraySum(nums, target);
        assert(isArrayEqual<int>(expected, result));
    }

    cout << "PASS!" << endl;
}
