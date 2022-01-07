#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> sortedSquares(vector<int>& nums)
    {
        bool flag = true;
        int sz = nums.size();
        int cnt = sz;
        vector<int> retVec;

        for (int i = 0; i < sz; i++)
        {
            if (nums[i] >= 0 && flag)
            {
                cnt = i;
                flag = false;
            }

            nums[i] *= nums[i];
        }

        int i = cnt;
        int j = cnt - 1;
        while (j >= 0 && i < sz)
        {
            if (nums[j] < nums[i])
            {
                retVec.push_back(nums[j]);
                j--;
            }
            else
            {
                retVec.push_back(nums[i]);
                i++;
            }
        }

        while (j >= 0)
        {
            retVec.push_back(nums[j--]);
        }

        while (i < sz)
        {
            retVec.push_back(nums[i++]);
        }

        return retVec;
    }
};