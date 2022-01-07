#include <bits/stdc++.h>
using namespace std;

//子序列和最大的暴力算法，算法时间复杂度O(N^2)，空间复杂度O(1)

class Solution
{
public:
    int maximumSubArraySum(vector<int>& nums)
    {
        int maxSum = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            int sum = nums[i];

            //j是子序列结束的位置，因为sum上次计算的结果可以被利用来计算下一次的子序列结果
            //只需要在上次计算结果基础上加上当前新增的这个元素即可
            for (int j = i + 1; j < nums.size(); j++)
            {
                sum += nums[j];
                if (sum > maxSum)
                    maxSum = sum;
            }
        }

        return maxSum;
    }
};