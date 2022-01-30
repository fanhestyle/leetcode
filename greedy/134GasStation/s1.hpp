#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost)
    {
        int allSum = 0;
        int index = -1;
        int subSum = 0;
        bool isOK = false;

        for (int i = 0; i < gas.size(); i++)
        {
            int diff = gas[i] - cost[i];
            allSum += diff;

            if (diff >= 0 && !isOK)
            {
                index = i;
                isOK = true;
            }

            if (isOK)
            {
                subSum += diff;
                if (subSum < 0)
                {
                    subSum = 0;
                    isOK = false;
                    index = -1;
                }
            }
        }

        if (allSum < 0)
            return -1;
        else
            return index;
    }
};