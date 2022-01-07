#include <bits/stdc++.h>
using namespace std;

//

class Solution
{
public:
    int totalFruit(vector<int>& fruits)
    {
        int maxCnt = 0;
        int fruitType[2] = {-1, -1};

        int sum = 0;
        for (int j = 0; j < fruits.size(); j++)
        {
            if (fruitType[0] == -1)
            {
                fruitType[0] = fruits[j];
                sum++;
                if (sum > maxCnt)
                    maxCnt = sum;
            }
            else if (fruitType[0] == fruits[j])
            {
                sum++;
                if (sum > maxCnt)
                    maxCnt = sum;
            }
            else if (fruitType[1] == -1)
            {
                fruitType[1] = fruits[j];
                sum++;
                if (sum > maxCnt)
                    maxCnt = sum;
            }
            else if (fruitType[1] == fruits[j])
            {
                sum++;
                if (sum > maxCnt)
                    maxCnt = sum;
            }
            else
            {
                sum = 1;
                int savedType = fruits[j - 1];
                if (savedType == fruitType[0])
                {
                    fruitType[1] = fruits[j];
                }
                else
                {
                    fruitType[0] = fruits[j];
                }

                for (int i = j - 1; i >= 0; i--)
                {
                    if (fruits[i] == savedType)
                    {
                        ++sum;
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