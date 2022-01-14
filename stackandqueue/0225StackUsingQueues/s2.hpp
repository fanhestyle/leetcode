#pragma once

#include <bits/stdc++.h>
using namespace std;

class MyStack
{
private:
    queue<int> q;

public:
    MyStack() {}

    void push(int x) { q.push(x); }

    int pop()
    {
        int sz = q.size();

        while (--sz)
        {
            int f = q.front();
            q.push(f);
            q.pop();
        }

        int tmp = q.front();
        q.pop();
        return tmp;
    }

    int top() { return q.back(); }

    bool empty() { return q.empty(); }
};