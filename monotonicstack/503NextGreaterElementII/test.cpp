#include "s1.hpp"

// vector<int> nextGreaterElements(vector<int>& nums) {

int main()
{
    Solution solution;
    vector<int> nums, r, e;

    {
        nums = {1, 2, 1};
        e = {2, -1, 2};
        r = solution.nextGreaterElements(nums);
        ASSERT_EX(isArrayEqual<int>(r, e),
                  ;); //, cerr << "e: " << e << ",r: " << r << endl);
    }

    {
        nums = {1, 2, 3, 4, 3};
        e = {2, 3, 4, -1, 4};
        r = solution.nextGreaterElements(nums);
        ASSERT_EX(isArrayEqual<int>(r, e),
                  ;); // cerr << "e: " << e << ",r: " << r << endl);
    }

    cout << "PASS!" << endl;
}