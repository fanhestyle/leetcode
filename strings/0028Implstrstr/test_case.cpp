/*
Example 1:
Input: haystack = "hello", needle = "ll"
Output: 2

Example 2:
Input: haystack = "aaaaa", needle = "bba"
Output: -1

Example 3:
Input: haystack = "", needle = ""
Output: 0

int strStr(string haystack, string needle)
*/

//#include "s1.hpp"
//#include "s2.hpp"
#include "s3.hpp"

int main()
{
    Solution s;
    string haystack, needle;
    int r, e;

    {
        haystack = "hello";
        needle = "ll";
        e = 2;
        r = s.strStr(haystack, needle);
        assert(r == e);
    }

    {
        haystack = "aaaa";
        needle = "bba";
        e = -1;
        r = s.strStr(haystack, needle);
        assert(r == e);
    }
    {
        haystack = "";
        needle = "";
        e = 0;
        r = s.strStr(haystack, needle);
        assert(r == e);
    }

    {
        haystack = "aaa";
        needle = "a";
        e = 0;
        r = s.strStr(haystack, needle);
        assert(r == e);
    }

    {
        haystack = "abc";
        needle = "c";
        e = 2;
        r = s.strStr(haystack, needle);
        assert(r == e);
    }

    {
        haystack = "aaa";
        needle = "aaa";
        e = 0;
        r = s.strStr(haystack, needle);
        assert(r == e);
    }

    {
        haystack = "mississippi";
        needle = "mississippi";
        e = 0;
        r = s.strStr(haystack, needle);
        assert(r == e);
    }

    cout << "PASS!" << endl;
}