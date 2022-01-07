#include <bits/stdc++.h>
using namespace std;

//

class Solution
{
public:
    int totalFruit(vector<int>& fruits)
    {
        int maxFruitNum = 0;
        int currentNum = 0;
        int fruitTypeCnt[100001] = {0};
        int left = 0;
        int cnt = 0;

        for (int i = 0; i < fruits.size(); i++)
        {
            if (fruitTypeCnt[fruits[i]] == 0)
                cnt++;
            ++fruitTypeCnt[fruits[i]];
            currentNum += 1;

            if (cnt <= 2)
            {
                maxFruitNum =
                    (currentNum > maxFruitNum) ? currentNum : maxFruitNum;
            }
            else
            {
                while (left < i && cnt > 2)
                {
                    --fruitTypeCnt[fruits[left]];
                    --currentNum;
                    if (fruitTypeCnt[fruits[left]] == 0)
                        --cnt;
                    left++;
                }
            }
        }

        return maxFruitNum;
    }
};