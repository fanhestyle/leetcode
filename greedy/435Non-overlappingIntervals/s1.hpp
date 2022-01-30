#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals)
    {
        int sz = intervals.size();
        if (sz <= 1)
            return 0;

        sort(intervals.begin(), intervals.end(),
             [](vector<int>& a, vector<int>& b) {
                 return a[0] < b[0] || (a[0] == b[0] && a[1] < b[1]);
             });

        int cur = intervals[0][1];
        int cnt = 1;
        for (int i = 1; i < sz; i++)
        {
            if (cur > intervals[i][0])
            {
                if (intervals[i][1] < cur)
                    cur = intervals[i][1];
            }
            else
            {
                cnt++;
                cur = intervals[i][1];
            }
        }

        return sz - cnt;
    }
};