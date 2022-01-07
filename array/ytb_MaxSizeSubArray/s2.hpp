#include <bits/stdc++.h>
using namespace std;

// using slider window

class Solution
{
public:
    vector<int> maximumSubArraySum(vector<int>& nums, int target)
    {
        int j = 0;
        int sum = 0;
        int left = 0, right = 0;
        int maxLen = 0;
        vector<int> retVec;

        for (int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
            if (sum > target)
            {
                while (sum > target)
                {
                    sum -= nums[j++];
                }
            }

            if (maxLen < i - j + 1)
            {
                maxLen = i - j + 1;
                left = j;
                right = i;
            }
        }

        for (int i = left; i <= right; i++)
        {
            retVec.push_back(nums[i]);
        }
        return retVec;
    }
};