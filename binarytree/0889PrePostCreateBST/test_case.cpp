#include "s1.hpp"

//TreeNode* constructFromPrePost(vector<int>& preorder, vector<int>& postorder)

#define null 0

int main()
{
    Solution s;
    TreeNode *r, *e;
    vector<int> preorder;
    vector<int> postorder;

    {
        preorder = {1,2,4,5,3,6,7};
        postorder = {4,5,2,6,7,3,1};
        r = s.constructFromPrePost(preorder, postorder);
        vector<int> et = {1,2,3,4,5,6,7};
        e = createTree(et);
        assert(isTreeEqual(r, e));
    }

    {
        postorder = {1};
        preorder = {1};
        r = s.constructFromPrePost(preorder, postorder);
        vector<int> et = {1};
        e = createTree(et);
        assert(isTreeEqual(r, e));
    }

    cout << "PASS!" << endl;
}