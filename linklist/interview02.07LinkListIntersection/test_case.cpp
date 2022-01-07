/*

输入：intersectVal = 8, listA = [4,1,8,4,5], listB = [5,0,1,8,4,5], skipA = 2,
skipB = 3 输出：Intersected at '8'

输入：intersectVal = 2, listA = [0,9,1,2,4], listB = [3,2,4], skipA = 3, skipB =
1 输出：Intersected at '2'

输入：intersectVal = 0, listA = [2,6,4], listB = [1,5], skipA = 3, skipB = 2
输出：null

ListNode* getIntersectionNode(ListNode* headA, ListNode* headB)
*/

#include "../../testutils/linklist_utils.hpp"
//#include "s1.hpp"
//#include "s2.hpp"
#include "s3.hpp"

int main()
{
    Solution s;
    ListNode *headA, *headB;
    ListNode *r, *e;

    {
        ListNode* five_pub = new ListNode(5);
        ListNode* four_pub = new ListNode(4);
        ListNode* eight_pub = new ListNode(8);

        eight_pub->next = four_pub;
        four_pub->next = five_pub;

        ListNode* four1 = new ListNode(4);
        ListNode* one1 = new ListNode(1);

        ListNode* five2 = new ListNode(5);
        ListNode* zero2 = new ListNode(0);
        ListNode* one2 = new ListNode(1);

        four1->next = one1;
        one1->next = eight_pub;
        headA = four1;

        five2->next = zero2;
        zero2->next = one2;
        one2->next = eight_pub;
        headB = five2;

        e = makeLinkList<ListNode, int>({8, 4, 5});
        r = s.getIntersectionNode(headA, headB);
        assert(isLinkedListEqual(r, e));
    }

    cout << "PASS!" << endl;
}