#include <bits/stdc++.h>
using namespace std;

//子序列和最大值，算法时间复杂度O(N)，空间复杂度O(1)

class Solution
{
public:
    int maximumSubArraySum(vector<int>& nums)
    {
        int maxSum = 0;
        int sum = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
            if (sum > maxSum)
                maxSum = sum;

            if (sum < 0)
                sum = 0;
        }

        return maxSum;
    }
};