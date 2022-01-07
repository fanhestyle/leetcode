/*
    ListNode* swapPairs(ListNode* head)

    Input: head = [1,2,3,4]
    Output: [2,1,4,3]

    Input: head = []
    Output: []

    Input: head = [1]
    Output: [1]
*/

#include "../../testutils/linklist_utils.hpp"
//#include "s1.hpp"
#include "s2_recursive.hpp"

int main()
{
    Solution s;
    ListNode *r, *e;
    ListNode* head;

    {
        head = makeLinkList<ListNode, int>({1, 2, 3, 4});
        e = makeLinkList<ListNode, int>({2, 1, 4, 3});
        r = s.swapPairs(head);
        assert(isLinkedListEqual(e, r));
    }

    {
        head = makeLinkList<ListNode, int>({1});
        e = makeLinkList<ListNode, int>({1});
        r = s.swapPairs(head);
        assert(isLinkedListEqual(e, r));
    }

    {
        head = makeLinkList<ListNode, int>({});
        e = makeLinkList<ListNode, int>({});
        r = s.swapPairs(head);
        assert(isLinkedListEqual(e, r));
    }
    cout << "PASS!" << endl;
}