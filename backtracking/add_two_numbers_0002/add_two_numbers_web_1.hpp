#pragma once
#include <bits/stdc++.h>

/*

*/

struct ListNode
{
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution
{
public:
    static ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
    {
        div_t qr = {0, 0}; // Quotient&Remainder
        ListNode dummy, *p = &dummy;

        while (l1 || l2 || qr.quot)
        {
            if (l1)
            {
                qr.quot += l1->val;
                l1 = l1->next;
            }

            if (l2)
            {
                qr.quot += l2->val;
                l2 = l2->next;
            }

            qr = div(qr.quot, 10);

            p->next = new ListNode(qr.rem);
            p = p->next;
        }

        return dummy.next;
    }
};