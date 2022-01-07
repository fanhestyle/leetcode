#include <bits/stdc++.h>
using namespace std;

/*
vector<vector<int>> findSubsequences(vector<int>& nums)
*/
#include "../testutils/twodarray_equal.hpp"
#include "inc_subs_1.hpp"

int main()
{
    Solution solution;
    vector<int> nums;
    vector<vector<int>> result, expected;

    {
        nums = {4, 6, 7, 7};
        expected = {{4, 6},    {4, 6, 7}, {4, 6, 7, 7}, {4, 7},
                    {4, 7, 7}, {6, 7},    {6, 7, 7},    {7, 7}};
        result = solution.findSubsequences(nums);
        assert(isEqual<int>(expected, result));
    }

    {
        nums = {4, 4, 3, 2, 1};
        expected = {{4, 4}};
        result = solution.findSubsequences(nums);
        assert(isEqual<int>(expected, result));
    }

    cout << "PASS!" << endl;
}
