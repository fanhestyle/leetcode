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
        int len1 = nums1.size();
        int len2 = nums2.size();
        int result = 0;

        for (int i = 0; i < len1; i++)
        {
            int len = min(len2, len1 - i);
            result = max(result, helper(nums1, nums2, i, 0, len));
        }

        for (int i = 0; i < len2; i++)
        {
            int len = min(len1, len2 - i);
            result = max(result, helper(nums2, nums1, i, 0, len));
        }

        return result;
    }

    int helper(vector<int>& A, vector<int>& B, int startA, int startB, int len)
    {
        int maxLen = 0;
        int k = 0;
        for (int i = 0; i < len; i++)
        {
            if (A[startA + i] == B[startB + i])
                k++;
            else
                k = 0;
            maxLen = max(maxLen, k);
        }

        return maxLen;
    }
};