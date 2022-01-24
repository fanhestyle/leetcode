#pragma once

#include "../../testutils/binarytree_utils.hpp"
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    TreeNode* constructMaximumBinaryTree(vector<int>& nums)
    {
        if (nums.empty())
            return nullptr;

        return createBinaryTree(nums, 0, nums.size() - 1);
    }

    TreeNode* createBinaryTree(vector<int>& nums, int left, int right)
    {
        if (left > right)
            return nullptr;

        int index = findMaxIndex(nums,left,right);
        TreeNode* parent = new TreeNode(nums[index]);
        TreeNode* leftChild = createBinaryTree(nums, left, index - 1);
        TreeNode* rightChild = createBinaryTree(nums, index + 1, right);
        if (parent)
        {
            parent->left = leftChild;
            parent->right = rightChild;
        }

        return parent;
    }

    int findMaxIndex(vector<int>& nums, int left, int right)
    {
        int maxVal = -1;
        int maxIndex = 0;

        for (int i = left; i <= right; i++)
        {
            if (nums[i] > maxVal)
            {
                maxVal = nums[i];
                maxIndex = i;
            }
        }

        return maxIndex;
    }
};