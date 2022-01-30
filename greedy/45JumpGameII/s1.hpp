#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int jump(vector<int>& nums)
    {
        if (nums.size() == 1)
            return 0;

        int cnt = 1;
        int curMaxRange = nums[0];
        int nextMaxRange = 0;

        for (int i = 1; i < nums.size() - 1; i++)
        {
            if (curMaxRange >= nums.size() - 1)
                break;

            int nextRange = nums[i] + i;
            if (i <= curMaxRange && nextRange > nextMaxRange)
                nextMaxRange = nextRange;

            if (i >= curMaxRange)
            {
                curMaxRange = nextMaxRange;
                cnt++;
            }
        }

        return cnt;
    }
};