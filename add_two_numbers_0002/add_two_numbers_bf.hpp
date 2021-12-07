#pragma once
#include <bits/stdc++.h>

/**
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
    static ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
    {
        if (l1->val == 0 && l1->next == nullptr)
            return l2;
        if (l2->val == 0 && l2->next == nullptr)
            return l1;

        bool isCarray = false;
        int firstVal = l1->val + l2->val;
        isCarray = (firstVal >= 10);

        ListNode* result =
            new ListNode((firstVal >= 10 ? firstVal - 10 : firstVal), nullptr);
        ListNode* p = result;

        l1 = l1->next;
        l2 = l2->next;

        while (l1 != nullptr && l2 != nullptr)
        {
            int v = l1->val + l2->val + isCarray;
            isCarray = (v >= 10);

            ListNode* tmp = new ListNode(v >= 10 ? (v - 10) : v, nullptr);
            p->next = tmp;
            p = p->next;

            l1 = l1->next;
            l2 = l2->next;
        }

        if (l1 == nullptr && l2 == nullptr)
        {
            if (isCarray)
            {
                ListNode* tmp = new ListNode(1, nullptr);
                p->next = tmp;
            }
        }
        else if (l1 != nullptr) // l1!=nullptr && l2 == nullptr
        {
            while (l1 && isCarray)
            {
                int v = isCarray + l1->val;
                isCarray = (v >= 10);

                ListNode* tmp = new ListNode((v >= 10 ? (v - 10) : v), nullptr);
                p->next = tmp;
                p = tmp;

                l1 = l1->next;
            }
            if (isCarray)
            {
                ListNode* tmp = new ListNode(1, nullptr);
                p->next = tmp;
            }
            else
            {
                while (l1)
                {
                    ListNode* tmp = new ListNode(l1->val, nullptr);
                    p->next = tmp;
                    p = tmp;
                    l1 = l1->next;
                }
            }
        }
        else // l1 == nullptr && l2 != nullptr
        {
            while (l2 && isCarray)
            {
                int v = isCarray + l2->val;
                isCarray = (v >= 10);

                ListNode* tmp = new ListNode((v >= 10 ? (v - 10) : v), nullptr);
                p->next = tmp;
                p = tmp;

                l2 = l2->next;
            }
            if (isCarray)
            {
                ListNode* tmp = new ListNode(1, nullptr);
                p->next = tmp;
            }
            else
            {
                while (l2)
                {
                    ListNode* tmp = new ListNode(l2->val, nullptr);
                    p->next = tmp;
                    p = tmp;
                    l2 = l2->next;
                }
            }
        }

        return result;
    }
};