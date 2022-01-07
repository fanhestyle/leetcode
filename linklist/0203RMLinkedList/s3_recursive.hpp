#pragma once

#include <bits/stdc++.h>
using namespace std;

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

        ListNode* h = removeElements(head->next, val);

        if (head->val == val)
            return h;
        else
        {
            head->next = h;
            return head;
        }
    }
};