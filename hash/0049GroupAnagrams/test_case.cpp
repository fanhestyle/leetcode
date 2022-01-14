/*
Input: strs = ["eat","tea","tan","ate","nat","bat"]
Output: [["bat"],["nat","tan"],["ate","eat","tea"]]

Input: strs = [""]
Output: [[""]]

Input: strs = ["a"]
Output: [["a"]]

vector<vector<string>> groupAnagrams(vector<string>& strs)
*/

#include "../../testutils/twodarray_equal.hpp"
//#include "s1.hpp"
#include "s2.hpp"

int main()
{
    Solution s;
    vector<string> strs;
    vector<vector<string>> r, e;

    {
        strs = {"eat", "tea", "tan", "ate", "nat", "bat"};
        r = s.groupAnagrams(strs);
        e = {{"bat"}, {"nat", "tan"}, {"ate", "eat", "tea"}};
        assert(isEqual<string>(r, e, true));
    }

    {
        strs = {"a"};
        r = s.groupAnagrams(strs);
        e = {{"a"}};
        assert(isEqual<string>(r, e, true));
    }

    {
        strs = {""};
        r = s.groupAnagrams(strs);
        e = {{""}};
        assert(isEqual<string>(r, e, true));
    }

    cout << "PASS!" << endl;
}
