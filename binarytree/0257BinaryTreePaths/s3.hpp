#pragma once

#include "../../testutils/binarytree_utils.hpp"
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    //     void pushAllLeftChild(TreeNode* p, stack<TreeNode*>& stk,
    //     vector<int>& path)
    //     {
    //         while (p->left)
    //         {
    //             stk.push(p);
    //             path.push_back(p->val);
    //             p = p->left;
    //         }
    //     }

    //     string getResult(const vector<int>& vec)
    //     {
    //         string str;
    //         for (int i = 0; i < vec.size() - 1; i++)
    //         {
    //             str += to_string(vec.at(i));
    //             str += "->";
    //         }
    //         str += to_string(vec.at(vec.size() - 1));
    //         return str;
    //     }

    //     vector<string> binaryTreePaths(TreeNode* root)
    //     {
    //         vector<string> result;
    //         vector<int> path;
    //         stack<TreeNode*> stk;

    //         pushAllLeftChild(root, stk, path);

    //         while (!stk.empty())
    //         {
    //             TreeNode* topNode = stk.top();
    //             stk.pop();

    //             if (topNode->right)
    //             {
    //                 pushAllLeftChild(topNode->right, stk, path);
    //             }
    //             else
    //             {
    //                 path.push_back(topNode->val);
    //                 result.push_back(getResult(path));
    //                 path.pop_back();
    //             }

    //         }

    //         return result;
    //     }
    // };

    vector<string> binaryTreePaths(TreeNode* root)
    {
        vector<string> result;

        if (root == nullptr)
            return result;

        stack<TreeNode*> stk;
        TreeNode* prev = nullptr;
        TreeNode* curr = root;

        do
        {
            while (curr)
            {
                stk.push(curr);
                curr = curr->left;
            }

            while (!curr && !stk.empty())
            {
                curr = stk.top();
                if (curr->left == nullptr && curr->right == nullptr)
                {
                    stack<TreeNode*> auxStack;
                    string str;
                    while (!stk.empty())
                    {
                        auxStack.push(stk.top());
                        stk.pop();
                    }

                    while (!auxStack.empty())
                    {
                        int topVal = auxStack.top()->val;
                        str += to_string(topVal);
                        str += "->";
                        stk.push(auxStack.top());
                        auxStack.pop();
                    }
                    str = str.substr(0, str.length() - 2);
                    result.push_back(str);
                }

                if (curr->right == nullptr || curr->right == prev)
                {
                    stk.pop();
                    prev = curr;
                    curr = nullptr;
                }
                else
                {
                    curr = curr->right;
                }
            }
        } while (!stk.empty());

        return result;
    }
};