#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> combinationSum3(int k, int n)
    {
        vector<vector<int>> result;
        vector<int> choice = {-1, 1, 2, 3, 4, 5, 6, 7, 8, 9};
        vector<int> track;
        dfs(result, choice, k, n, track, 1);

        return result;
    }

    void dfs(vector<vector<int>>& result, vector<int>& choice, int k, int n,
             vector<int>& track, int index)
    {
        if (index > 10)
            return;

        if (track.size() > k)
            return;
        if (sumOfArray(track) > n)
            return;

        if (track.size() == k && sumOfArray(track) == n)
        {
            result.push_back(track);
            return;
        }

        for (int i = index; i <= 9; i++)
        {
            track.push_back(choice[i]);
            dfs(result, choice, k, n, track, ++index);
            track.pop_back();
        }
    }

    int sumOfArray(const vector<int>& t)
    {
        int sum = 0;
        for (auto i : t)
        {
            sum += i;
        }
        return sum;
    }
};