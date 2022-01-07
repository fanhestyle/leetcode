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
        if (!head)
            return nullptr;

        while (head && head->val == val)
        {
            ListNode* q = head->next;
            delete head;
            head = q;
        }

        if (!head)
            return nullptr;

        ListNode* prev = head;
        ListNode* p = prev->next;

        while (p)
        {
            if (p->val != val)
            {
                prev = p;
                p = p->next;
            }
            else
            {
                ListNode* q = p->next;
                prev->next = q;
                delete p;
                p = q;
            }
        }

        return head;
    }
};