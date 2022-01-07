#include "s1.hpp"

/*
Input

["MyLinkedList", "addAtHead", "addAtTail", "addAtIndex", "get", "deleteAtIndex", "get"]

[[], [1], [3], [1, 2], [1], [1], [1]]

Output
[null, null, null, null, 2, null, 3]
*/

#include "s1.hpp" //singly linked list
//#include "s2.hpp" //doubly linked list

int main()
{
    MyLinkedList* myLinkedList = new MyLinkedList();
    myLinkedList->addAtHead(1);
    myLinkedList->addAtTail(3);
    myLinkedList->addAtIndex(1, 2); // linked list becomes 1->2->3
    cout <<    myLinkedList->get(1) << endl;           // return 2

    myLinkedList->deleteAtIndex(1); // now the linked list is 1->3
    myLinkedList->get(1);           // return 3
}