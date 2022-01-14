#pragma once
#include <bits/stdc++.h>
using namespace std;

class MyQueue
{
private:
    stack<int> masterStack;
    stack<int> slaveStack;

public:
    MyQueue() {}

    void push(int x) { slaveStack.push(x); }

    int pop()
    {
        if (masterStack.empty())
        {
            while (!slaveStack.empty())
            {
                masterStack.push(slaveStack.top());
                slaveStack.pop();
            }
        }
        int val = masterStack.top();
        masterStack.pop();
        return val;
    }

    int peek()
    {
        if (masterStack.empty())
        {
            while (!slaveStack.empty())
            {
                masterStack.push(slaveStack.top());
                slaveStack.pop();
            }
        }
        return masterStack.top();
    }

    bool empty() { return slaveStack.size() + masterStack.size() == 0; }
};
