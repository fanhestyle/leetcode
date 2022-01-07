/*

Input: head = [1,2,3,4,5]
Output: [5,4,3,2,1]

Input: head = [1,2]
Output: [2,1]

Input: head = []
Output: []

ListNode* reverseList(ListNode* head)
*/

#include "../../testutils/linklist_utils.hpp"
//#include "s1.hpp"
//#include "s2.hpp"
#include "s3_recursive.hpp"

int main()
{
    Solution s;
    ListNode* head;
    ListNode *e, *r;

    {
        head = makeLinkList<ListNode, int>({1, 2, 3, 4, 5});
        e = makeLinkList<ListNode, int>({5, 4, 3, 2, 1});
        r = s.reverseList(head);
        assert(isLinkedListEqual(e, r));
    }

    {
        head = makeLinkList<ListNode, int>({1, 2});
        e = makeLinkList<ListNode, int>({2, 1});
        r = s.reverseList(head);
        assert(isLinkedListEqual(e, r));
    }

    {
        head = makeLinkList<ListNode, int>({});
        e = makeLinkList<ListNode, int>({});
        r = s.reverseList(head);
        assert(isLinkedListEqual(e, r));
    }

    cout << "PASS!" << endl;
}