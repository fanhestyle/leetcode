#include <bits/stdc++.h>
using namespace std;

//#include "add_two_numbers_bf.hpp"
#include "add_two_numbers_web_1.hpp"

bool isListEqual(ListNode* a, ListNode* b)
{
    while (a != nullptr && b != nullptr)
    {
        if (a->val != b->val)
            return false;
        a = a->next;
        b = b->next;
    }
    if (a == nullptr && b == nullptr)
        return true;
    else
        return false;
}

int main()
{
    // test-case 1
    {
        // l1
        ListNode* three = new ListNode(3, nullptr);
        ListNode* four = new ListNode(4, three);
        ListNode* l1 = new ListNode(2, four);

        // l2
        ListNode* four_2 = new ListNode(4, nullptr);
        ListNode* six_2 = new ListNode(6, four_2);
        ListNode* l2 = new ListNode(5, six_2);

        // r
        ListNode* seven_r = new ListNode(8, nullptr);
        ListNode* zero_r = new ListNode(0, seven_r);
        ListNode* result = new ListNode(7, zero_r);

        ListNode* r = Solution::addTwoNumbers(l1, l2);

        assert(isListEqual(r, result));
    }

    // test-case 2
    {
        ListNode* l1 = new ListNode(0, nullptr);
        ListNode* l2 = new ListNode(0, nullptr);
        ListNode* result = new ListNode(0, nullptr);

        ListNode* r = Solution::addTwoNumbers(l1, l2);
        assert(isListEqual(r, result));
    }

    // test-case 3
    {
        // Input: l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]
        // Output: [8,9,9,9,0,0,0,1]

        ListNode* nine1 = new ListNode(9, nullptr);
        ListNode* nine2 = new ListNode(9, nine1);
        ListNode* nine3 = new ListNode(9, nine2);
        ListNode* nine4 = new ListNode(9, nine3);
        ListNode* nine5 = new ListNode(9, nine4);
        ListNode* nine6 = new ListNode(9, nine5);
        ListNode* l1 = new ListNode(9, nine6);

        ListNode* nine1_2 = new ListNode(9, nullptr);
        ListNode* nine2_2 = new ListNode(9, nine1_2);
        ListNode* nine3_2 = new ListNode(9, nine2_2);
        ListNode* l2 = new ListNode(9, nine3_2);

        ListNode* one = new ListNode(1, nullptr);
        ListNode* zero_1 = new ListNode(0, one);
        ListNode* zero_2 = new ListNode(0, zero_1);
        ListNode* zero_3 = new ListNode(0, zero_2);
        ListNode* nine__1 = new ListNode(9, zero_3);
        ListNode* nine__2 = new ListNode(9, nine__1);
        ListNode* nine__3 = new ListNode(9, nine__2);
        ListNode* result = new ListNode(8, nine__3);

        ListNode* r = Solution::addTwoNumbers(l1, l2);
        assert(isListEqual(r, result));
    }

    //test-case-4(wrong answer)
    {
        //l1:[1,8,3]
        //l2:[7,1]
        //expected: [8,9,3]

        ListNode *l1_3 = new ListNode(3,nullptr);
        ListNode *l1_8 = new ListNode(8,l1_3);
        ListNode *l1 = new ListNode(1,l1_8);

        ListNode *l2_1 = new ListNode(1,nullptr);
        ListNode *l2 = new ListNode(7,l2_1);

        ListNode *reslut_3 = new ListNode(3,nullptr);
        ListNode *result_9 = new ListNode(9,reslut_3);
        ListNode *result = new ListNode(8,result_9);

        ListNode *r = Solution::addTwoNumbers(l1,l2);
        assert(isListEqual(r,result));
    }

    cout << "PASS!" << endl;
}