#pragma once
#include <bits/stdc++.h>
using namespace std;

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
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
        slaveStack.push(x);
    }

    int pop()
    {
        while (!slaveStack.empty())
        {
            masterStack.push(slaveStack.top());
            slaveStack.pop();
        }

        int topVal = masterStack.top();
        masterStack.pop();
        return topVal;
    }

    int peek()
    {
        while (!slaveStack.empty())
        {
            masterStack.push(slaveStack.top());
            slaveStack.pop();
        }

        return masterStack.top();
    }

    bool empty() { return slaveStack.size() + masterStack.size() == 0; }
};
