#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minSubArrayLen(int target, vector<int>& nums)
    {
        int minLen = nums.size() + 1;
        vector<int> sumArray(minLen);
        sumArray[0] = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            sumArray[i + 1] = sumArray[i] + nums[i];
        }

        for (int i = 1; i <= nums.size(); i++)
        {
            int sumI = sumArray[i-1];
            int sumLowerBound = sumI + target;
            auto it = lower_bound(sumArray.begin(), sumArray.end(),
                                  sumLowerBound);
            if (it != sumArray.end())
            {
                minLen = (it - sumArray.begin() - i + 1) < minLen
                             ? (it - sumArray.begin() - i + 1)
                             : minLen;
            }
        }

        return minLen == nums.size() + 1 ? 0 : minLen;
    }
};