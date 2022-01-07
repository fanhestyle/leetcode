#include <bits/stdc++.h>
using namespace std;

/*
test-case:

Example 1:

Input: s = "25525511135"
Output: ["255.255.11.135","255.255.111.35"]
Example 2:

Input: s = "0000"
Output: ["0.0.0.0"]
Example 3:

Input: s = "101023"
Output: ["1.0.10.23","1.0.102.3","10.1.0.23","10.10.2.3","101.0.2.3"]


Constraints:

0 <= s.length <= 20
s consists of digits only.

vector<string> restoreIpAddresses(string s)

*/

#include "restoreip_1.hpp"
#include "../testutils/twodarray_equal.hpp"



int main()
{
    Solution solution;
    string s;
    vector<string> result, expected;

    {
        s = "25525511135";
        expected = {"255.255.11.135", "255.255.111.35"};
        result = solution.restoreIpAddresses(s);

        assert(isArrayEqual<std::string>(expected, result));
    }

    {
        s = "0000";
        expected = {"0.0.0.0"};
        result = solution.restoreIpAddresses(s);

        assert(isArrayEqual<std::string>(expected, result));
    }

    {
        s = "101023";
        expected = {"1.0.10.23", "1.0.102.3", "10.1.0.23", "10.10.2.3",
                    "101.0.2.3"};
        result = solution.restoreIpAddresses(s);

        assert(isArrayEqual<std::string>(expected, result));
    }

    cout << "PASS!" << endl;
}
