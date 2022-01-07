/*
bool hasCycle(ListNode* head)

Input: head = [3,2,0,-4], pos = 1
Output: true

Input: head = [1,2], pos = 0
Output: true

Input: head = [1], pos = -1
Output: false

*/
#include "../../testutils/linklist_utils.hpp"
//#include "s1.hpp"
#include "s2.hpp"

int main()
{
    Solution s;
    ListNode* head;
    bool r, e;

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
        r = s.hasCycle(head);
        e = true;
        assert(r == e);
    }

    {
        head = makeLinkList<ListNode, int>(
            {-21, 10,  17, 8, 4,  26, 5,  35, 33, -7,  -16, 27, -12, 6,
             29,  -12, 5,  9, 20, 14, 14, 2,  13, -24, 21,  23, -21, 5});
        r = s.hasCycle(head);
        e = false;
        assert(r == e);
    }

    cout << "PASS!" << endl;
}
