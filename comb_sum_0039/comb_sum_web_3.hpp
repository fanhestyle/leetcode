#pragma once

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    std::vector<std::vector<int> > combinationSum(int k, int n) {
        std::vector<std::vector<int> > res;
        std::vector<int> combination;
        combinationSum(n, res, combination, 1, k);
        return res;
    }
private:
    void combinationSum(int target, std::vector<std::vector<int> > &res, std::vector<int> &combination, int begin, int need) {
        if (!target) {
            res.push_back(combination);
            return;
        }
        else if (!need)
            return;
        for (int i = begin; i != 10 && target >= i * need + need * (need - 1) / 2; ++i) {
            combination.push_back(i);
            combinationSum(target - i, res, combination, i + 1, need - 1);
            combination.pop_back();
        }
    }
};