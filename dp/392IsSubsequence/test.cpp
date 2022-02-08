//#include "s1.hpp"
//#include "s2.hpp"
#include "s3.hpp"
// bool isSubsequence(string s, string t) {}

int main()
{
    Solution solution;

    string s, t;
    bool r, e;

    {
        s = "abc";
        t = "ahbgdc";
        e = true;
        r = solution.isSubsequence(s, t);
        ASSERT_EX(r == e, cerr << "e: " << e << ",r: " << r << endl);
    }

    {
        s = "axc";
        t = "ahbgdc";
        r = solution.isSubsequence(s, t);
        e = false;
        ASSERT_EX(r == e, cerr << "e: " << e << ",r: " << r << endl);
    }

    {
        s = "acb";
        t = "ahbgdc";
        r = solution.isSubsequence(s, t);
        e = false;
        ASSERT_EX(r == e, cerr << "e: " << e << ",r: " << r << endl);
    }

    {
        s = "bcd";
        t = "uuubcd";
        r = solution.isSubsequence(s, t);
        e = true;
        ASSERT_EX(r == e, cerr << "e: " << e << ",r: " << r << endl);
    }



    cout << "PASS!" << endl;
}