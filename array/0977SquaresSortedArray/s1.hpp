#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> sortedSquares(vector<int>& nums)
    {
        vector<int> retVec;

        for (int i = 0; i < nums.size(); i++)
        {
            nums[i] = nums[i] * nums[i];
        }

        sort(nums.begin(), nums.end());
        back_insert_iterator<vector<int>> biter(retVec);
        copy(nums.begin(), nums.end(), biter);

        return retVec;
    }
};