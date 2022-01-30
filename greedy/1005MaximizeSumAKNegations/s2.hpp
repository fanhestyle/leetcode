#include <bits/stdc++.h>
using namespace std;
bool abscomp(int a, int b) { return abs(a) > abs(b); }
class Solution
{
public:
    int largestSumAfterKNegations(vector<int>& nums, int k)
    {
        sort(nums.begin(), nums.end(), ::abscomp);

        int i = 0;
        while (i < nums.size())
        {
            if (nums[i] < 0 && k > 0)
            {
                nums[i] = -nums[i];
                k--;
            }
            i++;
        }

        if (k % 2 == 0)
            return accumulate(nums.begin(), nums.end(), 0);
        else
            return accumulate(nums.begin(), nums.end(), 0) -
                   2 * nums[nums.size() - 1];
    }
};