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
    ListNode* reverseBetween(ListNode* head, int left, int right)
    {
        if (head == nullptr)
            return nullptr;

        ListNode* dummy = new ListNode(0, head);
        ListNode* p = dummy;
        int cnt = 0;

        while (cnt < left - 1)
        {
            p = p->next;
            cnt++;
        }

        //定位到需要翻转的第一个位置处
        ListNode* preLeft = p;
        ListNode* firstReverseNode = p->next;

        ListNode* prev = p->next;
        ListNode* pn = prev->next;
        cnt += 2;

        while (cnt <= right)
        {
            ListNode* pnn = pn->next;
            pn->next = prev;
            prev = pn;
            pn = pnn;
            cnt++;
        }

        preLeft->next = prev;
        firstReverseNode->next = pn;

        return dummy->next;
    }
};