#include "../../testutils/binarytree_utils.hpp"
#include "../../testutils/debug.hpp"
#include "../../testutils/linklist_utils.hpp"
#include "../../testutils/twodarray_equal.hpp"
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findLength(vector<int>& nums1, vector<int>& nums2)
    {
        int result = 0;
        int len1 = nums1.size();
        int len2 = nums2.size();

        for (int i = 0; i < len1; i++)
            for (int j = 0; j < len2; j++)
            {
                int len = 0;
                while (i + len < len1 && j + len < len2 &&
                       nums1[i + len] == nums2[j + len])
                {
                    len++;
                }

                if (len > result)
                    result = len;
            }

        return result;
    }
};