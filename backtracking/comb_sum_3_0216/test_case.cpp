#include <bits/stdc++.h>
using namespace std;

/*
Example 1:

Input: k = 3, n = 7
Output: [[1,2,4]]
Explanation:
1 + 2 + 4 = 7
There are no other valid combinations.
Example 2:

Input: k = 3, n = 9
Output: [[1,2,6],[1,3,5],[2,3,4]]
Explanation:
1 + 2 + 6 = 9
1 + 3 + 5 = 9
2 + 3 + 4 = 9
There are no other valid combinations.
Example 3:

Input: k = 4, n = 1
Output: []
Explanation: There are no valid combinations.
Using 4 different numbers in the range [1,9], the smallest sum we can get is
1+2+3+4 = 10 and since 10 > 1, there are no valid combination.


Constraints:

2 <= k <= 9
1 <= n <= 60
*/

#include "../testutils/twodarray_equal.hpp"
#include "comb_sum_1.hpp"

int main()
{
    Solution solution;
    int k, n;
    vector<vector<int>> expected, result;

    {
        k = 3;
        n = 7;
        expected = {{1, 2, 4}};
        result = solution.combinationSum3(k, n);
        assert(isEqual<int>(expected, result));
    }

    {
        k = 3;
        n = 9;
        expected = {{1, 2, 6}, {1, 3, 5}, {2, 3, 4}};
        result = solution.combinationSum3(k, n);
        assert(isEqual<int>(expected, result));
    }

    {
        k = 4;
        n = 1;
        expected = {};
        result = solution.combinationSum3(k, n);
        assert(isEqual<int>(expected, result));
    }

    {
        k = 9;
        n = 45;
        expected = {{1, 2, 3, 4, 5, 6, 7, 8, 9}};
        result = solution.combinationSum3(k, n);
        assert(isEqual<int>(expected, result));
    }

    cout << "PASS!" << endl;
}