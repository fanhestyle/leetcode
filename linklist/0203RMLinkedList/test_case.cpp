/*
ListNode* removeElements(ListNode* head, int val)

Input: head = [1,2,6,3,4,5,6], val = 6
Output: [1,2,3,4,5]

Input: head = [], val = 1
Output: []

Input: head = [7,7,7,7], val = 7
Output: []
*/

#include "../../testutils/linklist_utils.hpp"
//#include "s1.hpp"
//#include "s2.hpp"
#include "s3_recursive.hpp"

int main()
{
    Solution solution;
    ListNode *result, *expected, *head;
    int val;

    {
        val = 1;
        head = makeLinkList<ListNode, int>({});
        expected = nullptr;
        result = solution.removeElements(head, val);
        assert(isLinkedListEqual(result, expected));
    }

    {
        val = 7;
        head = makeLinkList<ListNode, int>({7, 7, 7, 7});
        expected = makeLinkList<ListNode, int>({});
        result = solution.removeElements(head, val);
        assert(isLinkedListEqual(result, expected));
    }

    {
        val = 6;
        head = makeLinkList<ListNode, int>({1, 2, 6, 3, 4, 5, 6});
        expected = makeLinkList<ListNode, int>({1, 2, 3, 4, 5});
        result = solution.removeElements(head, val);
        assert(isLinkedListEqual(result, expected));
    }

    cout << "PASS!" << endl;
}