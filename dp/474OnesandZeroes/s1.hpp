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
    int maxLen;

public:
    int findMaxForm(vector<string>& strs, int m, int n)
    {
        maxLen = 0;
        vector<string> track;
        dfs(strs, track, m, n, 0);
        return maxLen;
    }

    void dfs(vector<string>& strs, vector<string>& track, int m, int n,
             int index)
    {
        if (m < 0 || n < 0)
            return;
        if (track.size() > maxLen)
            maxLen = track.size();

        for (int i = index; i < strs.size(); i++)
        {
            track.push_back(strs.at(i));
            int zeros = 0;
            int ones = 0;
            for (int j = 0; j < strs.at(i).size(); ++j)
            {
                if (strs.at(i)[j] == '0')
                {
                    zeros++;
                }
                else
                {
                    ones++;
                }
            }
            dfs(strs, track, m - zeros, n - ones, i + 1);
            track.pop_back();
        }
    }
};