#include "../../testutils/binarytree_utils.hpp"
#include "../../testutils/debug.hpp"
#include "../../testutils/linklist_utils.hpp"
#include "../../testutils/twodarray_equal.hpp"
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int integerBreak(int n)
    {
        vector<int> track;
        int maxValue = 0;
        int startPos = 1;
        dfs(n, track, maxValue, 1);
        return maxValue;
    }

    void dfs(int remain, vector<int>& track, int& maxValue, int start)
    {
        if (remain < 0)
            return;
        if (remain == 0)
        {
            int r = 1;
            for (int it : track)
                r *= it;
            if (r > maxValue)
                maxValue = r;
            return;
        }

        for (int i = start; i < remain; i++)
        {
            track.push_back(i);
            dfs(remain - i, track, maxValue, i + 1);
            track.pop_back();
        }
    }
};