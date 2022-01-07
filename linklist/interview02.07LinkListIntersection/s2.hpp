#pragma once
#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{
public:
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB)
    {
        ListNode* p = headA;
        ListNode* q = headB;

        if (!p || !q)
            return nullptr;

        int szA = 0;
        while (p)
        {
            p = p->next;
            szA++;
        }

        int szB = 0;
        while (q)
        {
            q = q->next;
            szB++;
        }

        p = headA;
        q = headB;

        int diffCnt = szA - szB;

        if (diffCnt > 0)
        {
            while (diffCnt--)
            {
                p = p->next;
            }
        }
        else
        {
            while (diffCnt++)
            {
                q = q->next;
            }
        }

        while (p && q)
        {
            if (p == q)
            {
                return p;
            }
            p = p->next;
            q = q->next;
        }

        return nullptr;
    }
};