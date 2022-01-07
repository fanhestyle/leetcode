/*

Input: head = [3,2,0,-4], pos = 1
Output: tail connects to node index 1

Input: head = [1,2], pos = 0
Output: tail connects to node index 0

ListNode* detectCycle(ListNode* head)
*/

#include "../../testutils/linklist_utils.hpp"
//#include "s1.hpp"
#include "s2.hpp"

int main()
{
    Solution s;
    ListNode* head;
    ListNode *r, *e;

    {
        ListNode* three = new ListNode(3);
        ListNode* two = new ListNode(2);
        ListNode* zero = new ListNode(0);
        ListNode* four = new ListNode(-4);

        three->next = two;
        two->next = zero;
        zero->next = four;
        four->next = two;
        head = three;

        e = two;
        r = s.detectCycle(head);
        assert(r == e);
    }

    {
        ListNode* one = new ListNode(1);
        ListNode* two = new ListNode(2);

        one->next = two;
        two->next = one;
        head = one;

        e = one;
        r = s.detectCycle(head);
        assert(r == e);
    }

    {
        ListNode* one = new ListNode(1);
        head = one;

        e = nullptr;
        r = s.detectCycle(head);
        assert(r == e);
    }

    cout << "PASS!" << endl;
}
