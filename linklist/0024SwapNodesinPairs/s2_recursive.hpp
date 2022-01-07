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

        if (!head->next->next)
        {
            ListNode* tmp = head->next;
            ListNode* nextNode = head->next->next;
            head->next->next = head;
            head->next = nextNode;
            return tmp;
        }

        ListNode* sub = swapPairs(head->next->next);
        ListNode* ret = head->next;
        head->next->next = head;
        head->next = sub;
        return ret;
    }
};