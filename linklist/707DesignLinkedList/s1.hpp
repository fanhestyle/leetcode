#pragma once
#include <bits/stdc++.h>
using namespace std;
/*
singly linked list implementation.
*/

struct ListNode
{
    int val;
    ListNode* next;

    ListNode(int v = 0, ListNode* n = nullptr) : val(v), next(n) {}
};

class MyLinkedList
{
private:
    ListNode* dummyHead;
    int length;

public:
    MyLinkedList()
    {
        dummyHead = new ListNode();
        length = 0;
    }

    ~MyLinkedList()
    {
        while (dummyHead->next)
        {
            ListNode* p = dummyHead->next;
            dummyHead->next = p->next;
            delete p;
        }
        length = 0;
        delete dummyHead;
    }

    int get(int index)
    {
        if (index >= length || index < 0)
            return -1;

        ListNode* p = dummyHead->next;

        while (index--)
        {
            p = p->next;
        }

        return p->val;
    }

    void addAtHead(int val)
    {
        ListNode* newHead = new ListNode(val, dummyHead->next);
        dummyHead->next = newHead;
        ++length;
    }

    void addAtTail(int val)
    {
        ListNode* newTail = new ListNode(val);

        ListNode* p = dummyHead;

        while (p->next)
        {
            p = p->next;
        }

        p->next = newTail;
        ++length;
    }

    void addAtIndex(int index, int val)
    {
        if (index > length || index < 0)
        {
            return;
        }

        ListNode* newInsertedNode = new ListNode(val);

        ListNode* p = dummyHead;

        while (index--)
        {
            p = p->next;
        }

        newInsertedNode->next = p->next;
        p->next = newInsertedNode;
        ++length;
    }

    void deleteAtIndex(int index)
    {
        if (index < 0 || index >= length)
            return;

        ListNode* p = dummyHead;
        while (index--)
        {
            p = p->next;
        }

        ListNode* nodeToDel = p->next;
        p->next = nodeToDel->next;
        delete nodeToDel;
        --length;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */