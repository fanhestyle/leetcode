/*

Input: head = [1,2,3,4,5], left = 2, right = 4
Output: [1,4,3,2,5]

Input: head = [5], left = 1, right = 1
Output: [5]

ListNode* reverseBetween(ListNode* head, int left, int right)
*/

#include "../../testutils/linklist_utils.hpp"
//include "s1.hpp"
#include "s2_recursive.hpp"

int main()
{
    Solution s;
    ListNode *r, *e;
    ListNode* head;
    int left;
    int right;

    {
        left = 2;
        right = 4;
        head = makeLinkList<ListNode, int>({1, 2, 3, 4, 5});
        r = s.reverseBetween(head, left, right);
        e = makeLinkList<ListNode, int>({1, 4, 3, 2, 5});
        assert(isLinkedListEqual(r, e));
    }

    {
        left = 1;
        right = 1;
        head = makeLinkList<ListNode, int>({5});
        r = s.reverseBetween(head, left, right);
        e = makeLinkList<ListNode, int>({5});
        assert(isLinkedListEqual(r, e));
    }

    {
        left = 1;
        right = 5;
        head = makeLinkList<ListNode, int>({1, 2, 3, 4, 5});
        r = s.reverseBetween(head, left, right);
        e = makeLinkList<ListNode, int>({5, 4, 3, 2, 1});
        assert(isLinkedListEqual(r, e));
    }

    cout << "PASS!" << endl;
}