// struct ListNode
// {
//     int val;
//     ListNode* next;
//     ListNode() : val(0), next(nullptr) {}
//     ListNode(int x) : val(x), next(nullptr) {}
//     ListNode(int x, ListNode* next) : val(x), next(next) {}
// };

#include <bits/stdc++.h>
using namespace std;

template<typename T> bool isLinkedListEqual(const T& p, const T& q)
{
    if (p == nullptr && q != nullptr)
        return false;
    if (p != nullptr && q == nullptr)
        return false;

    T l1 = p;
    T l2 = q;

    while (l1 && l2)
    {
        if (l1->val != l2->val)
            return false;
        l1 = l1->next;
        l2 = l2->next;
        if (l1 == nullptr && l2 != nullptr)
            return false;
        if (l1 != nullptr && l2 == nullptr)
            return false;
    }
    return true;
}

template<typename U, typename T> U* makeLinkList(const vector<T>& vec)
{
    if (vec.size() == 0)
        return nullptr;

    U* head = new U(vec.at(0));
    U* p = head;

    for (int i = 1; i < vec.size(); i++)
    {
        U* node = new U(vec.at(i));
        p->next = node;
        p = p->next;
    }

    return head;
}