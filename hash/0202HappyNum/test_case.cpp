/*
bool isHappy(int n)
Input: n = 19
Output: true
Explanation:
12 + 92 = 82
82 + 22 = 68
62 + 82 = 100
12 + 02 + 02 = 1
*/

#include "s1.hpp"

int main()
{
    Solution s;
    bool r, e;
    int n;

    {
        n = 19;
        e = true;
        r = s.isHappy(n);
        assert(r == e);
    }

    {
        n = 2;
        e = false;
        r = s.isHappy(n);
        assert(r == e);
    }

    cout << "PASS!" << endl;
}