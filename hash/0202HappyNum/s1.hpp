#pragma once

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isHappy(int n)
    {
        unordered_set<int> iset;

        if (n == 1)
        {
            return true;
        }

        while (true)
        {
            int sum = 0;
            while (n)
            {
                int m = n % 10;
                sum += m * m;
                n = n / 10;
            }

            if (sum == 1)
            {
                return true;
            }

            if (iset.count(sum))
            {
                return false;
            }
            else
            {
                iset.insert(sum);
            }
            n = sum;
        }
    }
};