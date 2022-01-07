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
    ListNode* reverseList(ListNode* head)
    {
        if (head == nullptr)
            return nullptr;

        ListNode* dummyNode = new ListNode();

        ListNode* p = head;
        while (p)
        {
            ListNode* newNode = new ListNode(p->val);
            newNode->next = dummyNode->next;
            dummyNode->next = newNode;

            p = p->next;
        }

        return dummyNode->next;
    }
};