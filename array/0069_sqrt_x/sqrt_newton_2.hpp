#pragma once

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int mySqrt(int x)
    {
        if (x == 0)
            return 0;

        double C = x;
        double x0 = C;

        while (true)
        {
            double xi = (C / x0 + x0) * 0.5;
            if (fabs(xi - x0) < 1e-6)
            {
                break;
            }
            x0 = xi;
        }

        return (int)x0;
    }
};