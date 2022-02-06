#include "../../testutils/binarytree_utils.hpp"
#include "../../testutils/debug.hpp"
#include "../../testutils/linklist_utils.hpp"
#include "../../testutils/twodarray_equal.hpp"
#include <bits/stdc++.h>
using namespace std;

// brutal force

class Solution
{
private:
    int minDiff;

public:
    int lastStoneWeightII(vector<int>& stones)
    {
        minDiff = INT_MAX;

        int sum = accumulate(stones.begin(), stones.end(), 0);

        vector<int> track;
        dfs(stones, track, 0, sum);
        return minDiff;
    }

    void dfs(vector<int>& stone, vector<int>& track, int index, int sum)
    {
        if (track.size() == stone.size())
        {
            return;
        }

        for (int i = index; i < stone.size(); i++)
        {
            track.push_back(stone[i]);
            int selectedSum = accumulate(track.begin(), track.end(), 0);
            int diff = abs((sum - selectedSum) - selectedSum);
            if (minDiff > diff)
            {
                minDiff = diff;
            }
            dfs(stone, track, i + 1, sum);
            track.pop_back();
        }
    }
};