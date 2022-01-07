/*
Given (possibly negative) integers A1 , A2 , . . . , AN , find the maximum value
of subArrays (For convenience, the maximum subsequence sum is 0 if all the
integers are negative.)

test-case:

    nums = {−2, 11, −4, 13, −5, −2}
    Output = 20 (nums[1]~nums[3])

    int maximumSubArraySum(vector<int>& nums)
*/

//#include "s1.hpp"
//#include "s2.hpp"
//#include "s3.hpp"
#include "s4.hpp"

int main()
{
    Solution solution;
    vector<int> nums;
    int expected, result;

    {
        nums = {-2, 11, -4, 13, -5, -2};
        expected = 20;
        result = solution.maximumSubArraySum(nums);
        assert(expected == result);
    }

    {
        nums = {-1, -2, -3};
        expected = 0;
        result = solution.maximumSubArraySum(nums);
        assert(expected == result);
    }

    {
        nums = {4, -3, 5, -2, -1, 2, 6, -2};
        expected = 11;
        result = solution.maximumSubArraySum(nums);
        assert(expected == result);
    }

    cout << "PASS!" << endl;
}