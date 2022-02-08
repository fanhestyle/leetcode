#include "../../testutils/binarytree_utils.hpp"
#include "../../testutils/debug.hpp"
#include "../../testutils/linklist_utils.hpp"
#include "../../testutils/twodarray_equal.hpp"
#include <bits/stdc++.h>
using namespace std;

//double pointer

class Solution
{
public:
    bool isSubsequence(string s, string t)
    {
        int len = t.size();
        int sublen = s.size();
        int i = 0, j = 0;
        while (i < len && j < sublen)
        {
            if (t[i] == s[j])
            {
                j++;
            }
            i++;
        }

        if (j != sublen)
            return false;
        else
            return true;
    }
};