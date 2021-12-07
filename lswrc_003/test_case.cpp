#include <bits/stdc++.h>
using namespace std;

//#include "longest_substring_no_repeat.hpp"
//#include "lsnr2.hpp"
#include "lsnr3_web.hpp"

int main()
{
    {
        string s = "abcabcbb";
        int r = Solution::lengthOfLongestSubstring(s);
        assert(r == 3);
    }

    // test-case 2
    {
        string s = "bbbbb";
        int r = Solution::lengthOfLongestSubstring(s);
        assert(r == 1);
    }

    // test-case 3
    {
        string s = "pwwkew";
        int r = Solution::lengthOfLongestSubstring(s);
        assert(r == 3);
    }

    // test-case 4
    {
        string s = "";
        int r = Solution::lengthOfLongestSubstring(s);
        assert(r == 0);
    }

    cout << "PASS!" << endl;
}
