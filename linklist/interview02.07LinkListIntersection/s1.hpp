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

        while (p)
        {
            q = headB;
            while (q)
            {
                if (p == q)
                {
                    return p;
                }
                else
                {
                    q = q->next;
                }
            }
            p = p->next;
        }

        return nullptr;
    }
};