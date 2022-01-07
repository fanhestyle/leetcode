#include <bits/stdc++.h>
using namespace std;

// brutal force O(N^3)

class Solution
{
public:
    int totalFruit(vector<int>& fruits)
    {
        int maxCnt = 0;
        int type[2] = {-1, -1};

        for (int i = 0; i < fruits.size(); i++)
        {
            for (int j = i; j < fruits.size(); j++)
            {
                type[0] = -1;
                type[1] = -1;
                int sum = 0;
                for (int k = i; k <= j; k++)
                {
                    if (type[0] == -1)
                    {
                        type[0] = fruits[k];
                        ++sum;
                        if (sum > maxCnt)
                            maxCnt = sum;
                    }
                    else if (fruits[k] == type[0])
                    {
                        ++sum;
                        if (sum > maxCnt)
                            maxCnt = sum;
                    }
                    else if (type[1] == -1)
                    {
                        type[1] = fruits[k];
                        ++sum;
                        if (sum > maxCnt)
                            maxCnt = sum;
                    }
                    else if (fruits[k] == type[1])
                    {
                        ++sum;
                        if (sum > maxCnt)
                            maxCnt = sum;
                    }
                    else
                    {
                        break;
                    }
                }
            }
        }
        return maxCnt;
    }
};