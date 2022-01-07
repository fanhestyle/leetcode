/*

Input: nums = [-4,-1,0,3,10]
Output: [0,1,9,16,100]

Input: nums = [-7,-3,2,3,11]
Output: [4,9,9,49,121]

vector<int> sortedSquares(vector<int>& nums)
*/

#include "../../testutils/twodarray_equal.hpp"
//#include "s1.hpp"
//#include "s2.hpp"
#include "s3_web.hpp"

int main()
{
    Solution solution;
    vector<int> nums;
    vector<int> expected, result;

    {
        nums = {-4, -1, 0, 3, 10};
        expected = {0, 1, 9, 16, 100};
        result = solution.sortedSquares(nums);
        assert(isArrayEqual<int>(expected, result));
    }

    {
        nums = {-7, -3, 2, 3, 11};
        expected = {4, 9, 9, 49, 121};
        result = solution.sortedSquares(nums);
        assert(isArrayEqual<int>(expected, result));
    }

    {
        nums = {-5, -3, -2, -1};
        expected = {1, 4, 9, 25};
        result = solution.sortedSquares(nums);
        assert(isArrayEqual<int>(expected, result));
    }

    cout << "PASS!" << endl;
}