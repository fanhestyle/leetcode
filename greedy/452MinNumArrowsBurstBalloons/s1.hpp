#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findMinArrowShots(vector<vector<int>>& points)
    {
        if (points.size() <= 1)
            return points.size();

        sort(points.begin(), points.end(), [](vector<int>& a, vector<int>& b) {
            return a[0] < b[0] || (a[0] == b[0] && a[1] < b[1]);
        });

        int cnt = 1;
        int cur = points[0][1];
        for (int i = 1; i < points.size(); i++)
        {
            if (cur >= points[i][0])
            {
                if (cur > points[i][1])
                {
                    cur = points[i][1];
                }
            }
            else
            {
                cur = points[i][1];
                cnt++;
            }
        }

        return cnt;
    }
};