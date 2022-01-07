#pragma once

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int mySqrt(int x)
    {
        int lo = 0, hi = x;

        int retVal = -1;

        while (lo <= hi)
        {
            int mid = lo + (hi - lo) / 2;

            if ((long long)mid * mid <= x)
            {
                retVal = mid;
                lo = mid + 1;
            }
            else
            {
                hi = mid - 1;
            }
        }

        return retVal;
    }
};