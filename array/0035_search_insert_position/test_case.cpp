/*
int searchInsert(vector<int>& nums, int target);

Input: nums = [1,3,5,6], target = 5
Output: 2

Example 2:
Input: nums = [1,3,5,6], target = 2
Output: 1

Example 3:
Input: nums = [1,3,5,6], target = 7
Output: 4
*/

//#include "sip_1.hpp"
#include "sip_2.hpp"

int main()
{
    Solution solution;
    std::vector<int> nums;
    int target;
    int expected, result;

    {
        nums = {1,3,5,6};
        target = 5;
        expected = 2;
        result = solution.searchInsert(nums,target);
        assert(expected == result);
    }

    {
        nums = {1,3,5,6};
        target = 2;
        expected = 1;
        result = solution.searchInsert(nums,target);
        assert(expected == result);
    }

    {
        nums = {1,3,5,6};
        target = 7;
        expected = 4;
        result = solution.searchInsert(nums,target);
        assert(expected == result);
    }

    cout << "PASS!" << endl;
}