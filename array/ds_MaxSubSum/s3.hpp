#include <bits/stdc++.h>
using namespace std;

//子序列和最大的分治算法，算法时间复杂度O(Nlog(N))，空间复杂度O(1)

class Solution
{
public:
    int maximumSubArraySum(vector<int>& nums)
    {
        if (nums.size() == 0)
            return 0;

        return maximumSubArraySum_impl(nums, 0, nums.size() - 1);
    }

    int maximumSubArraySum_impl(vector<int>& nums, int left, int right)
    {
        if (left == right)
        {
            if (nums[left] <= 0)
                return 0;
            else
                return nums[left];
        }

        int mid = left + (right - left) / 2;

        int leftMax = maximumSubArraySum_impl(nums, left, mid);
        int rightMax = maximumSubArraySum_impl(nums, mid + 1, right);

        int midLeftSum = 0;
        int midLeftMax = 0;
        for (int i = mid; i >= left; i--)
        {
            midLeftSum += nums[i];
            if (midLeftSum > midLeftMax)
                midLeftMax = midLeftSum;
        }

        int midRightSum = 0;
        int midRightMax = 0;
        for (int i = mid + 1; i <= right; i++)
        {
            midRightSum += nums[i];
            if (midRightSum > midRightMax)
                midRightMax = midRightSum;
        }

        return max({leftMax, rightMax, midLeftMax + midRightMax});
    }
};