#pragma once

#include <bits/stdc++.h>
using namespace std;

/*
 * Definition for singly-linked list.
 */
struct ListNode
{
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{
public:
    bool hasCycle(ListNode* head)
    {
        if (!head)
            return false;

        ListNode* q = head;
        ListNode* p = head->next;

        while (p && p->next)
        {
            if (p == q)
                return true;
            else
            {
                p = p->next->next;
                q = q->next;
            }
        }

        return false;
    }
};