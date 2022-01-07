#include <bits/stdc++.h>
using namespace std;

// Solution 1 : using brutal force

class Solution
{
public:
    vector<int> maximumSubArraySum(vector<int>& nums, int target)
    {
        int lenMax = 0;
        int left = 0, right = 0;
        vector<int> retVec;

        for (int i = 0; i < nums.size(); i++)
        {
            int sum = 0;
            for (int j = i; j < nums.size(); j++)
            {
                sum += nums[j];
                if (sum <= target)
                {
                    if (lenMax < j - i + 1)
                    {
                        lenMax = j - i + 1;
                        left = i;
                        right = j;
                    }
                }
                else
                {
                    break;
                }
            }
        }

        for (int i = left; i <= right; i++)
        {
            retVec.push_back(nums[i]);
        }
        return retVec;
    }
};