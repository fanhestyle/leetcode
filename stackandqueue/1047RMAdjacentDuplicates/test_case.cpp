/*
Input: s = "abbaca"
Output: "ca"
string removeDuplicates(string s)
*/

//#include "s1.hpp"
#include "s2.hpp"

int main()
{
    Solution sol;
    string s;
    string r, e;

    {
        s = "abbaca";
        e = "ca";
        r = sol.removeDuplicates(s);
        assert(r == e);
    }

    {
        s = "azxxzy";
        e = "ay";
        r = sol.removeDuplicates(s);
        assert(r == e);
    }

    cout << "PASS!" << endl;
}