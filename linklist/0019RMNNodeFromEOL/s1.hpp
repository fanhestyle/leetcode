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
            return nullptr;

        int cnt = 0;
        ListNode* p = head;
        while (p)
        {
            p = p->next;
            ++cnt;
        }

        int prevCnt = cnt - n;

        ListNode* dummy = new ListNode(0, head);
        p = dummy;
        while (prevCnt--)
        {
            p = p->next;
        }

        ListNode* tmp = p->next;
        p->next = tmp->next;
        delete tmp;

        return dummy->next;
    }
};