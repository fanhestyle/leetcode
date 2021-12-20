#include <bits/stdc++.h>
using namespace std;

/*
vector<vector<string>> partition(string s)

Example 1:
Input: s = "aab"
Output: [["a","a","b"],["aa","b"]]
Example 2:

Input: s = "a"
Output: [["a"]]
*/

#include "../testutils/twodarray_equal.hpp"
#include "pp_1.hpp"

int main()
{
    Solution solution;
    string s;
    vector<vector<string>> result, expected;

    {
        s = "aab";
        expected = {{"a", "a", "b"}, {"aa", "b"}};
        result = solution.partition(s);
        assert(isEqual<std::string>(expected, result));
    }

    {
        s = "a";
        expected = {{"a"}};
        result = solution.partition(s);
        assert(isEqual<std::string>(expected, result));
    }

    cout << "PASS!" << endl;
}
