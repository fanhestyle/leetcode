/*

 bool isValid(string s)
*/

#include "s1.hpp"

int main()
{
    Solution sol;
    string s;
    bool r, e;

    {
        s = "()";
        r = sol.isValid(s);
        e = true;
        assert(r == e);
    }

    {
        s = "()[]{}";
        r = sol.isValid(s);
        e = true;
        assert(r == e);
    }

    {
        s = "(]";
        r = sol.isValid(s);
        e = false;
        assert(r == e);
    }

    cout << "PASS!" << endl;
}