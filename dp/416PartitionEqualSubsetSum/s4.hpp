#include "../../testutils/binarytree_utils.hpp"
#include "../../testutils/debug.hpp"
#include "../../testutils/linklist_utils.hpp"
#include "../../testutils/twodarray_equal.hpp"
#include <bits/stdc++.h>
using namespace std;

// 0-1 package
// two dimension dp

class Solution
{
public:
    bool canPartition(vector<int>& nums)
    {
        if (nums.size() <= 1)
            return false;

        int sum = accumulate(nums.begin(), nums.end(), 0);
        if (sum & 1 == 1)
            return false;
        sum = sum / 2;

        vector<int> partitionVector(sum + 1, 0);

        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = sum; j >= 0; j--)
            {
                if (j == nums[i])
                {
                    partitionVector[j] = 1;
                }
                else
                {
                    if (j >= nums[i])
                    {
                        if (partitionVector[j - nums[i]] == 1)
                        {
                            partitionVector[j] = 1;
                        }
                    }
                }
            }
        }

        return partitionVector[sum];
    }
};