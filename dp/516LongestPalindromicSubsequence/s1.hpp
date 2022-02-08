#include <bits/stdc++.h>
#include "../../testutils/binarytree_utils.hpp"
#include "../../testutils/debug.hpp"
#include "../../testutils/linklist_utils.hpp"
#include "../../testutils/twodarray_equal.hpp"
using namespace std;

//中心点法(此处不能使用这种方法，这种方法仅限于连续的回文串：
//可以用来解决647的问题)

class Solution
{
public:
    int longestPalindromeSubseq(string s) {
        int maxlen = 0; 
        int len = s.length();

        for(int i = 0; i < len; i++)
        {
            int l = 0;
            while (i+l < len && i-l >= 0 && s[i+l] == s[i-l])
            {
                l++;
            }
            if(l > maxlen)
                maxlen = l; 
        }

        for(int i = 0; i < len; i+= 2)
        {
            int l = 0;
            int beg = i;
            int end = i+1;
            while (beg-l >= 0 && end+l < len && s[beg-l] == s[end+l])
            {
                l++;
            }
            if(l > maxlen)
                maxlen = l;
        }

        return maxlen;        
    }
};