#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int wiggleMaxLength(vector<int>& nums)
    {
        if (nums.size() == 0)
            return 0;
        if (nums.size() == 1)
            return 1;

        bool nextFlag;
        int i = 0, j = 1;
        int cnt = 0;

        while (j < nums.size())
        {
            if (nums[i] < nums[j])
            {
                cnt = 1;
                nextFlag = false;
                i = j;
                j++;
                break;
            }
            else if (nums[i] > nums[j])
            {
                cnt = 1;
                i = j;
                j++;
                nextFlag = true;
                break;
            }
            else
            {
                j++;
            }
        }

        while (j < nums.size())
        {
            if (nextFlag == true) //下一个比较项要求 nums[i] < nums[j]
            {
                if (nums[i] < nums[j])
                {
                    cnt++;
                    nextFlag = !nextFlag;
                }
            }
            else //下一个比较项要求 nums[i] > nums[j]
            {
                if (nums[i] > nums[j])
                {
                    cnt++;
                    nextFlag = !nextFlag;
                }
            }
            i = j;
            j++;
        }

        return cnt + 1;
    }
};