#pragma once
#include <bits/stdc++.h>
using namespace std;

class MyQueue
{
private:
    stack<int> masterStack;

public:
    MyQueue() {}

    void push(int x) { masterStack.push(x); }

    int pop()
    {
        int v = masterStack.top();
        masterStack.pop();

        if (masterStack.size() == 0)
        {
            return v;
        }

        int item = pop();
        masterStack.push(v);

        return item;
    }

    int peek()
    {
        int v = masterStack.top();
        if (masterStack.size() == 1)
        {
            return v;
        }
        masterStack.pop();

        int item = peek();
        masterStack.push(v);

        return item;
    }

    bool empty() { return masterStack.size() == 0; }
};
