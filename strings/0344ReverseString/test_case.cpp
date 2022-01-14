/*
void reverseString(vector<char>& s)

Input: s = ["h","e","l","l","o"]
Output: ["o","l","l","e","h"]

Input: s = ["H","a","n","n","a","h"]
Output: ["h","a","n","n","a","H"]
*/

#include "../../testutils/twodarray_equal.hpp"
#include "s1.hpp"

int main()
{
    Solution solution;
    vector<char> s;
    vector<char> e;

    {
        s = {'h', 'e', 'l', 'l', 'o'};
        e = {'o', 'l', 'l', 'e', 'h'};
        solution.reverseString(s);
        assert(isArrayEqual<char>(s, e));
    }

    {
        s = {'H', 'a', 'n', 'n', 'a', 'h'};
        e = {'h', 'a', 'n', 'n', 'a', 'H'};
        solution.reverseString(s);
        assert(isArrayEqual<char>(s, e));
    }

    cout << "PASS!" << endl;
}