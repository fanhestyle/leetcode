/*
* int search(vector<int>& nums, int target);
Example 1:

Input: nums = [-1,0,3,5,9,12], target = 9
Output: 4
Explanation: 9 exists in nums and its index is 4


Example 2:

Input: nums = [-1,0,3,5,9,12], target = 2
Output: -1
Explanation: 2 does not exist in nums so return -1

Constraints:

1 <= nums.length <= 104
-104 < nums[i], target < 104
All the integers in nums are unique.
nums is sorted in ascending order.
*/

//#include "include.hpp"
#include "half_include.hpp"
//#include "include_non_recursive.hpp"
//#include "half_include_non_recursive.hpp"
//#include "lolesshi.hpp"


int main() 
{
    Solution solution;
    vector<int> nums;
    int target;
    int result;
    int expected;

	{
        nums = {-1, 0, 3, 5, 9, 12};
        target = 9;
        expected = 4;
        result = solution.search(nums, target);
        assert(result == expected);
	}

    {
        nums = {-1, 0, 3, 5, 9, 12};
        target = 2;
        expected = -1;
        result = solution.search(nums, target);
        assert(result == expected);
    }


    cout << "PASS!" << endl;
}
