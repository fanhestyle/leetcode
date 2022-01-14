/*
Input: nums = [1,1,1,2,2,3], k = 2
Output: [1,2]
vector<int> topKFrequent(vector<int>& nums, int k)
*/

#include "../../testutils/twodarray_equal.hpp"
#include "s1.hpp"

int main()
{
    Solution sol;
    vector<int> nums;
    int k;
    vector<int> r, e;

    {
        nums = {1, 1, 1, 2, 2, 3};
        k = 2;
        e = {1, 2};
        r = sol.topKFrequent(nums, k);
        assert(isArrayEqual<int>(r, e));
    }

    {
        nums = {1};
        k = 1;
        e = {1};
        r = sol.topKFrequent(nums, k);
        assert(isArrayEqual<int>(r, e));
    }

    cout << "PASS!" << endl;
}