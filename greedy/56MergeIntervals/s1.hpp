#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals)
    {
        if (intervals.size() <= 1)
            return intervals;

        sort(intervals.begin(), intervals.end(),
             [](vector<int>& a, vector<int>& b) { return a[0] < b[0]; });

        int curLeft = intervals[0][0];
        int curRight = intervals[0][1];
        vector<vector<int>> result;
        for (int i = 1; i < intervals.size(); i++)
        {
            if (curRight >= intervals[i][0])
            {
                if (intervals[i][1] > curRight)
                    curRight = intervals[i][1];
            }
            else
            {
                result.push_back({curLeft, curRight});
                curLeft = intervals[i][0];
                curRight = intervals[i][1];
            }
        }

        result.push_back({curLeft, curRight});

        return result;
    }
};