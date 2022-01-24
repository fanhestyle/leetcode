#pragma once

#include "../../testutils/binarytree_utils.hpp"
#include <bits/stdc++.h>
using namespace std;

/*
使用不拷贝新生成树节点的方式，在LeetCode上过不了，可能是节点数量过多
*/

class Solution
{
public:
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2)
    {
        if (!root1)
            return root2;
        if (!root2)
            return root1;

        queue<TreeNode*> q1;
        q1.push(root1);
        queue<TreeNode*> q2;
        q2.push(root2);

        queue<TreeNode*> q;
        TreeNode* root = nullptr;

        do
        {
            if (q.empty())
            {
                TreeNode* f1 = q1.front();
                TreeNode* f2 = q2.front();
                q1.pop();
                q2.pop();
                q1.push(f1->left);
                q1.push(f1->right);
                q2.push(f2->left);
                q2.push(f2->right);

                root = new TreeNode(f1->val + f2->val);
                q.push(root);
            }

            int sz = q.size();
            int leafNodeCnt = 0;

            for (int i = 0; i < sz; i++)
            {
                TreeNode*& p = q.front();
                q.pop();

                TreeNode* l1 = q1.front();
                q1.pop();
                TreeNode* r1 = q1.front();
                q1.pop();

                TreeNode* l2 = q2.front();
                q2.pop();
                TreeNode* r2 = q2.front();
                q2.pop();

                if (p == nullptr)
                {
                    leafNodeCnt++;

                    q1.push(nullptr);
                    q1.push(nullptr);
                    q2.push(nullptr);
                    q2.push(nullptr);

                    q1.push(nullptr);
                    q1.push(nullptr);
                    q2.push(nullptr);
                    q2.push(nullptr);

                    q.push(nullptr);
                    q.push(nullptr);

                    continue;
                }

                bool leftEmptyFlag = false;
                bool rightEmptyFlag = false;

                if (l1 && !l2)
                {
                    p->left = new TreeNode(l1->val);
                    q1.push(l1->left);
                    q1.push(l1->right);
                    q2.push(nullptr);
                    q2.push(nullptr);
                }
                else if (l2 && !l1)
                {
                    p->left = new TreeNode(l2->val);
                    q2.push(l2->left);
                    q2.push(l2->right);
                    q1.push(nullptr);
                    q1.push(nullptr);
                }
                else if (l1 && l2)
                {
                    p->left = new TreeNode(l1->val + l2->val);
                    q2.push(l2->left);
                    q2.push(l2->right);
                    q1.push(l1->left);
                    q1.push(l1->right);
                }
                else
                {
                    q2.push(nullptr);
                    q2.push(nullptr);
                    q1.push(nullptr);
                    q1.push(nullptr);
                    leftEmptyFlag = true;
                }

                if (r1 && !r2)
                {
                    p->right = new TreeNode(r1->val);
                    q1.push(r1->left);
                    q1.push(r1->right);
                    q2.push(nullptr);
                    q2.push(nullptr);
                }
                else if (r2 && !r1)
                {
                    p->right = new TreeNode(r2->val);
                    q2.push(r2->left);
                    q2.push(r2->right);
                    q1.push(nullptr);
                    q1.push(nullptr);
                }
                else if (r1 && r2)
                {
                    p->right = new TreeNode(r1->val + r2->val);
                    q2.push(r2->left);
                    q2.push(r2->right);
                    q1.push(r1->left);
                    q1.push(r1->right);
                }
                else
                {
                    q2.push(nullptr);
                    q2.push(nullptr);
                    q1.push(nullptr);
                    q1.push(nullptr);
                    rightEmptyFlag = true;
                }

                if (leftEmptyFlag && rightEmptyFlag)
                {
                    ++leafNodeCnt;
                }

                q.push(p->left);
                q.push(p->right);
            }

            if (leafNodeCnt == sz)
                return root;

        } while (!q.empty());

        return root;
    }
};