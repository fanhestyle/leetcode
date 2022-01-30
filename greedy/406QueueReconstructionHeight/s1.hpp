#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people)
    {
        sort(people.begin(), people.end(), [](vector<int>& a, vector<int>& b) {
            return a[0] > b[0] || (a[0] == b[0] && a[1] < b[1]);
        });

        list<vector<int>> lr;
        for (auto it : people)
        {
            int pos = it[1];
            auto b = lr.begin();
            while (pos--)
            {
                b++;
            }
            lr.insert(b, it);
        }

        return vector<vector<int>>(lr.begin(), lr.end());
    }
};