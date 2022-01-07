#pragma once

/*
解释参考：https://www.geeksforgeeks.org/write-a-c-program-to-print-all-permutations-of-a-given-string/
本道题这种解法得出的顺序和我用回溯法得出的顺序有所不同【但是按照题干要求都是正确的解答】，测试用例没有针对这种情况去写
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int> > permute(vector<int> &num) {
	    vector<vector<int> > result;
	    
	    permuteRecursive(num, 0, result);
	    return result;
    }
    
    // permute num[begin..end]
    // invariant: num[0..begin-1] have been fixed/permuted
	void permuteRecursive(vector<int> &num, int begin, vector<vector<int> > &result)	{
		if (begin >= num.size()) {
		    // one permutation instance
		    result.push_back(num);
		    return;
		}
		
		for (int i = begin; i < num.size(); i++) {
		    swap(num[begin], num[i]);
		    permuteRecursive(num, begin + 1, result);
		    // reset
		    swap(num[begin], num[i]);
		}
    }
};