#pragma once

#include <bits/stdc++.h>
using namespace std;

class DecendingQueue
{
private:
    deque<int> deq;

public:
    DecendingQueue() {}

    void push(int v)
    {
        while (!deq.empty() && v > deq.back())
        {
            deq.pop_back();
        }
        deq.push_back(v);
    }

    void pop(int v)
    {
        if (!deq.empty() && v == deq.front())
        {
            deq.pop_front();
        }
    }

    int front() { return deq.front(); }
};

class Solution
{
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k)
    {
        vector<int> r;
        DecendingQueue dq;

        for (int i = 0; i < k; i++)
        {
            dq.push(nums[i]);
        }
        r.push_back(dq.front());

        for (int i = 0; i + k < nums.size(); i++)
        {
            dq.pop(nums[i]);
            dq.push(nums[i+k]);
            r.push_back(dq.front());
        }

        return r;
    }
};