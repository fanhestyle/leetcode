#pragma once

#include <bits/stdc++.h>
using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
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
    ListNode* removeElements(ListNode* head, int val)
    {
        ListNode* dummy = new ListNode(0, head);

        ListNode* p = dummy;
        ListNode* q = p->next;

        while (q)
        {
            if (q->val == val)
            {
                p->next = q->next;
                delete q;
                q = p->next;
            }
            else
            {
                p = q;
                q = q->next;
            }
        }

        return dummy->next;
    }
};