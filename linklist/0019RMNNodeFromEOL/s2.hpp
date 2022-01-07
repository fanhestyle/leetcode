#pragma once
#include <bits/stdc++.h>
using namespace std;

/**
 * Definition for singly-linked list.
 *
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
    ListNode* removeNthFromEnd(ListNode* head, int n)
    {
        if (!head)
            return head;

        ListNode* dummy = new ListNode(0, head);
        ListNode* p = dummy;
        ListNode* q = dummy;

        int cnt = n + 1;
        while (p && cnt--)
        {
            p = p->next;
        }

        while (p && q)
        {
            p = p->next;
            q = q->next;
        }

        ListNode* tmp = q->next;
        q->next = tmp->next;
        delete tmp;

        return dummy->next;
    }
};