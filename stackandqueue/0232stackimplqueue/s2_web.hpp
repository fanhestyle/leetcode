#pragma once
#include <bits/stdc++.h>
using namespace std;

/*
enqueue O(n)
dequeue O(1)
*/

class MyQueue
{
private:
    stack<int> masterStack;
    stack<int> slaveStack;

public:
    MyQueue() {}

    void push(int x)
    {
        while (!masterStack.empty())
        {
            slaveStack.push(masterStack.top());
            masterStack.pop();
        }

        masterStack.push(x);
        while (!slaveStack.empty())
        {
            masterStack.push(slaveStack.top());
            slaveStack.pop();
        }
    }

    int pop()
    {
        int topVal = masterStack.top();
        masterStack.pop();
        return topVal;
    }

    int peek() { return masterStack.top(); }

    bool empty() { return masterStack.size() == 0; }
};
