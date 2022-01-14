#pragma once

/*
brutal-force: hashing
*/

#include <bits/stdc++.h>
using namespace std;

//假设这三个数分别是 a+b+c = 0

class Solution
{
public:
    vector<vector<int>> threeSum(vector<int>& nums)
    {
        if (nums.size() < 3)
            return {};

        vector<vector<int>> result;
        sort(nums.begin(), nums.end());
        unordered_map<int, int> uset;

        for (int j = 0; j < nums.size(); j++)
            uset[nums[j]] = j;

        // choose a
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > 0)
                break;

            if (i > 0 && nums[i] == nums[i - 1])
                continue;

            int sumOfTwo = 0 - nums[i];

            // choose b
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (j > i + 1 && nums[j] == nums[j - 1])
                    continue;

                int n = sumOfTwo - nums[j];

                auto it = uset.find(n);
                if (it != uset.end())
                {
                    if (it->second > j)
                        result.push_back({nums[i], nums[j], nums[it->second]});
                }
                // else
                // {
                //     break; //由于数组是升序排列的，因此如果it->second得到的值小于j，那么继续往后
                //     //移动j，得到的it->seconde只会越来越小，所以可以直接退出整个j的循环（数组经过重排升序排列这一点需要注意）
                // }
            }
        }

        return result;
    }
};

/*
    public List<List<Integer>> threeSum(int[] nums) {
       if(nums.length < 3){
           return new ArrayList<>();
       }
       //排序
       Arrays.sort(nums);
       HashMap<Integer,Integer> map = new HashMap<>();
       List<List<Integer>> resultarr = new ArrayList<>();
       //存入哈希表
       for(int i = 0; i < nums.length; i++){
           map.put(nums[i],i);
       }
       Integer t;
       int target = 0;
       for(int i = 0; i < nums.length; ++i){
            target = -nums[i];
            //去重
            if(i > 0 && nums[i] == nums[i-1]){
                continue;
            }
            for(int j = i + 1; j < nums.length; ++j){
                if(j > i+1 && nums[j] == nums[j-1]){
                    continue;
                }
                if((t = map.get(target - nums[j])) != null){
                    //符合要求的情况,存入
                    if(t > j){
                       resultarr.add(new ArrayList<>
                       (Arrays.asList(nums[i], nums[j], nums[t])));

                    }
                    else {
                        break;
                    }

                }
            }
       }
       return resultarr;
    }
*/