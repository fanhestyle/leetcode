#pragma once

#include <bits/stdc++.h>

/*
 * Definition for singly-linked list.
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
    ListNode* swapPairs(ListNode* head)
    {
        if (head == nullptr || !head->next)
            return head;

        ListNode* dummy = new ListNode(0, head);

        ListNode* pp = dummy;
        ListNode* p = pp->next;
        ListNode* q = p->next;

        while (q)
        {
            ListNode* tmp = q->next;
            q->next = p;
            p->next = tmp;
            pp->next = q;

            pp = p;
            p = tmp;

            if (!tmp)
                return dummy->next;
            else
                q = tmp->next;
        }
        return dummy->next;
    }
};