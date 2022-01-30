#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool lemonadeChange(vector<int>& bills)
    {
        unordered_map<int, int> cnts;

        for (int i = 0; i < bills.size(); i++)
        {
            if (bills[i] == 5)
            {
                cnts[5]++;
            }
            else if (bills[i] == 10)
            {
                cnts[5]--;
                cnts[10]++;
            }
            else if (bills[i] == 20)
            {
                if (cnts[10] > 0)
                {
                    cnts[10] -= 1;
                    cnts[5] -= 1;
                }
                else
                {
                    cnts[5] -= 3;
                }
            }

            if (cnts[5] < 0 || cnts[10] < 0)
                return false;
        }

        return true;
    }
};