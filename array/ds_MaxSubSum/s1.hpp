#include <bits/stdc++.h>
using namespace std;

//子序列和最大的暴力算法，算法时间复杂度O(N^3)，空间复杂度O(1)

class Solution
{
public:
    int maximumSubArraySum(vector<int>& nums)
    {
        int maxSum = 0; //负数作0看待，因此最小不可能小于0
        //固定第一个变量 i = 子数组的起始位置
        for (int i = 0; i < nums.size(); i++)
        {
            //固定第二个变量 j = 子数组最后一个索引的下一个位置
            for (int j = i + 1; j < nums.size(); j++)
            {
                //开始计算[i,j)子数组之和，并更新和的最大值
                int sum = 0;
                for (int k = i; k < j; k++)
                    sum += nums[k];
                if (sum > maxSum)
                    maxSum = sum;
            }
        }

        return maxSum;
    }
};