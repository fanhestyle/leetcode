/*
Input: s = "cbaebabacd", p = "abc"
Output: [0,6]

Input: s = "abab", p = "ab"
Output: [0,1,2]

 vector<int> findAnagrams(string s, string p)
*/

#include "../../testutils/twodarray_equal.hpp"
//#include "s1.hpp"
#include "s2.hpp"

int main()
{
    Solution solution;
    string s, p;
    vector<int> r, e;

    {
        s = "cbaebabacd";
        p = "abc";
        e = {0, 6};
        r = solution.findAnagrams(s, p);
        assert(isArrayEqual<int>(e, r));
    }

    {
        s = "abab";
        p = "ab";
        e = {0, 1, 2};
        r = solution.findAnagrams(s, p);
        assert(isArrayEqual<int>(e, r));
    }

    {
        s = "baa";
        p = "aa";
        e = {1};
        r = solution.findAnagrams(s, p);
        assert(isArrayEqual<int>(e, r));
    }

    {
        s = "ababababab";
        p = "aab";
        e = {0, 2, 4, 6};
        r = solution.findAnagrams(s, p);
        assert(isArrayEqual<int>(e, r));
    }

    cout << "PASS!" << endl;
}