/*

Input: head = [1,2,3,4,5], n = 2
Output: [1,2,3,5]

Input: head = [1], n = 1
Output: []

Input: head = [1,2], n = 1
Output: [1]

ListNode* removeNthFromEnd(ListNode* head, int n)
*/

#include "../../testutils/linklist_utils.hpp"
//#include "s1.hpp"
#include "s2.hpp"

int main()
{
    Solution s;
    ListNode* head;
    int n;
    ListNode *r, *e;

    {
        head = makeLinkList<ListNode, int>({1, 2, 3, 4, 5});
        n = 2;
        e = makeLinkList<ListNode, int>({1, 2, 3, 5});
        r = s.removeNthFromEnd(head, n);
        assert(isLinkedListEqual(r, e));
    }

    {
        head = makeLinkList<ListNode, int>({1});
        n = 1;
        e = makeLinkList<ListNode, int>({});
        r = s.removeNthFromEnd(head, n);
        assert(isLinkedListEqual(r, e));
    }

    {
        head = makeLinkList<ListNode, int>({1, 2});
        n = 1;
        e = makeLinkList<ListNode, int>({1});
        r = s.removeNthFromEnd(head, n);
        assert(isLinkedListEqual(r, e));
    }
    cout << "PASS!" << endl;
}