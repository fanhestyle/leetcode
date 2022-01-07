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

        ListNode* p = head;
        unordered_set<ListNode*> iset;

        while (p)
        {
            auto it = iset.find(p);
            if (it != iset.end())
                return true;
            iset.insert(p);
            p = p->next;
        }

        return false;
    }
};