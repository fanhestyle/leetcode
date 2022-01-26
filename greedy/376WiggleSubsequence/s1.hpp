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

        bool checkFlag;
        int i = 0, j = 1;
        int cnt = 0;

        while (j < nums.size())
        {
            if (nums[i] < nums[j])
            {
                cnt = 1;
                checkFlag = false;
                i = j;
                j++;
                break;
            }
            else if (nums[i] > nums[j])
            {
                cnt = 1;
                i = j;
                j++;
                checkFlag = true;
                break;
            }
            else
            {
                j++;
            }
        }

        while (j < nums.size())
        {
            
        }

        return cnt + 1;
    }

    bool isValid(int i, int j, bool checkStatus)
    {
        if (checkStatus)
        {
            return i < j;
        }
        else
        {
            return i > j;
        }
    }
};