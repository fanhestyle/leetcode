#include "../../testutils/binarytree_utils.hpp"
#include "../../testutils/debug.hpp"
#include "../../testutils/linklist_utils.hpp"
#include "../../testutils/twodarray_equal.hpp"
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2)
    {
        unordered_map<int, int> imap;
        for (int i = 0; i < nums2.size(); i++)
            imap[nums2[i]] = -1;

        int len2 = nums2.size();
        stack<int> istack;
        istack.push(nums2[0]);
        for (int i = 1; i < nums2.size(); i++)
        {
            int curValue = nums2[i];
            while (!istack.empty())
            {
                int curTop = istack.top();
                if (curTop > curValue)
                    break;
                imap[curTop] = curValue;
                istack.pop();
            }
            istack.push(curValue);
        }

        vector<int> result;
        for (int i = 0; i < nums1.size(); i++)
        {
            result.push_back(imap[nums1[i]]);
        }

        return result;
    }
};