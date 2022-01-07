#pragma once

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPerfectSquare(int num)
    {
        int lo = 1, hi = num;

        while (lo <= hi)
        {
            int mid = lo + (hi - lo) / 2;

            if ((long long)(mid * mid) < num)
            {
                lo = mid + 1;
            }
            else if ((long long)(mid * mid) > num)
            {
                hi = mid - 1;
            }
            else
            {
                return true;
            }
        }

        return false;
    }
};