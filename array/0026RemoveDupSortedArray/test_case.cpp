/*

Input: nums = [1,1,2]
Output: 2, nums = [1,2,_]

Input: nums = [0,0,1,1,1,2,2,3,3,4]
Output: 5, nums = [0,1,2,3,4,_,_,_,_,_]

int removeDuplicates(vector<int>& nums)
*/


//#include "s1.hpp"
#include "s2.hpp"

int main()
{
    Solution solution;
    bool expected, result;
    vector<int> nums;

    {
        nums = {1,1,2};
        expected = 2;
        result = solution.removeDuplicates(nums);
        assert(expected==result);
    }

    {
        nums = {0,0,1,1,1,2,2,3,3,4};
        expected = 5;
        result = solution.removeDuplicates(nums);
        assert(expected==result);
    }

    cout << "PASS!" << endl;
}