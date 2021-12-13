#include <bits/stdc++.h>
using namespace std;

//#include "cpn_bf.hpp"
//#include "cpn_dfs_web.hpp"
//#include "cpn_bfs_web.hpp"
#include "cpn_nonrecursive_web.hpp"

/* test-cases:

Input: digits = "23"
Output: ["ad","ae","af","bd","be","bf","cd","ce","cf"]
Example 2:

Input: digits = ""
Output: []
Example 3:

Input: digits = "2"
Output: ["a","b","c"]
*/

int main()
{
    // vector<string> letterCombinations(string digits)

    string digits;
    vector<string> result;
    vector<string> expected;

    {
        digits = "23";
        expected = {"ad", "ae", "af", "bd", "be", "bf", "cd", "ce", "cf"};
        result = Solution::letterCombinations(digits);
        assert(expected == result);
    }

    {
        digits = "";
        expected = {};
        result = Solution::letterCombinations(digits);
        assert(expected == result);
    }

    {
        digits = "2";
        expected = {"a", "b", "c"};
        result = Solution::letterCombinations(digits);
        assert(expected == result);
    }

    {
        digits = "7";
        expected = {"p", "q", "r", "s"};
        result = Solution::letterCombinations(digits);
        assert(expected == result);
    }

    cout << "PASS!" << endl;
}