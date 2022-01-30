#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int largestSumAfterKNegations(vector<int>& nums, int k)
    {
        for (int i = 0; i < k; i++)
        {
            sort(nums.begin(), nums.end());
            nums[0] = -nums[0];
        }

        return accumulate(nums.begin(), nums.end(), 0);
    }
};