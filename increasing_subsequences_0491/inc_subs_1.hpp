#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> findSubsequences(vector<int>& nums)
    {
        vector<vector<int>> result;
        vector<int> track;
        dfs(result, nums, track, 0);
        return result;
    }

    void dfs(vector<vector<int>>& result, vector<int>& nums, vector<int>& track,
             int index)
    {
        if (track.size() >= 2)
        {
            result.push_back(track);
        }

        if (index >= nums.size())
            return;

        for (int i = index; i < nums.size(); i++)
        {
            if ((i == index) || (nums[i] > nums[i - 1]))
            {
                if ((track.size() == 0) || (track.back() <= nums[i]))
                {
                    track.push_back(nums[i]);
                    dfs(result, nums, track, i+1);
                    track.pop_back();
                }
            }
        }
    }
};