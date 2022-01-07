/*
Input: target = 7, nums = [2,3,1,2,4,3]
Output: 2

Input: target = 4, nums = [1,4,4]
Output: 1

Input: target = 11, nums = [1,1,1,1,1,1,1,1]
Output: 0

int minSubArrayLen(int target, vector<int>& nums)
*/

//#include "s1.hpp"
//#include "s2_web.hpp"
//#include "s3_slider_window_web.hpp"
#include "s4_binary_search_web.hpp"

int main()
{
    Solution solution;
    int result, expected;
    int target;
    vector<int> nums;

    {
        nums = {2, 3, 1, 2, 4, 3};
        target = 7;
        expected = 2;
        result = solution.minSubArrayLen(target, nums);
        assert(expected == result);
    }

    {
        nums = {1, 4, 4};
        target = 4;
        expected = 1;
        result = solution.minSubArrayLen(target, nums);
        assert(expected == result);
    }

    {
        nums = {1, 1, 1, 1, 1, 1, 1, 1};
        target = 11;
        expected = 0;
        result = solution.minSubArrayLen(target, nums);
        assert(expected == result);
    }

    cout << "PASS!" << endl;
}