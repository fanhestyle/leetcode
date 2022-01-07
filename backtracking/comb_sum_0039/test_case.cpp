#include <bits/stdc++.h>
using namespace std;

/*
vector<vector<int>> combinationSum(vector<int>& candidates, int target)

Example 1:

Input: candidates = [2,3,6,7], target = 7
Output: [[2,2,3],[7]]
Explanation:
2 and 3 are candidates, and 2 + 2 + 3 = 7. Note that 2 can be used multiple
times. 7 is a candidate, and 7 = 7. These are the only two combinations. Example
2:

Input: candidates = [2,3,5], target = 8
Output: [[2,2,2,2],[2,3,3],[3,5]]
Example 3:

Input: candidates = [2], target = 1
Output: []
*/

//#include "comb_sum_1.hpp"
//#include "comb_sum_2.hpp"
//#include "comb_sum_web_1.hpp"
//#include "comb_sum_web_2.hpp"
#include "comb_sum_web_3.hpp"

bool isEqual(const vector<vector<int>>& lhs, const vector<vector<int>>& rhs)
{
    for (int i = 0; i < lhs.size(); i++)
    {
        for (int j = 0; j < lhs.at(i).size(); j++)
        {
            if (lhs.at(i).at(j) != rhs.at(i).at(j))
                return false;
        }
    }

    return true;
}

int main()
{
    vector<int> candidates;
    vector<vector<int>> result;
    vector<vector<int>> expected;
    int target;
    Solution solution;

    // Example 1
    {
        candidates = {2, 3, 6, 7};
        target = 7;
        expected = {{2, 2, 3}, {7}};
        result = solution.combinationSum(candidates, target);
        assert(isEqual(expected, result));
    }

    // Example 2
    {
        candidates = {2, 3, 5};
        target = 8;
        expected = {{2, 2, 2, 2}, {2, 3, 3}, {3, 5}};
        result = solution.combinationSum(candidates, target);
        assert(isEqual(expected, result));
    }

    // Example 3
    {
        candidates = {2};
        target = 8;
        expected = {};
        result = solution.combinationSum(candidates, target);
        assert(isEqual(expected, result));
    }

    cout << "PASS!" << endl;
}