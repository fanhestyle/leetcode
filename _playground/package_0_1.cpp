#include <bits/stdc++.h>
using namespace std;

void test_2_wei_bag_problem1()
{
    vector<int> weight = {3, 1, 4};
    vector<int> value = {20, 15, 30};
    int bagWeight = 4;

    vector<int> dp(bagWeight + 1, 0);

    // for (int i = 0; i < weight.size(); i++)
    //     for (int j = bagWeight; j >= weight[i]; j--)
    //         dp[j] = max(dp[j], dp[j - weight[i]] + value[i]);

    // for (int j = bagWeight; j >= 0; j--)
    //     for (int i = 0; i < weight.size(); i++)
    //         dp[j] = max(dp[j], dp[j - weight[i]] + value[i]);

    cout << dp[bagWeight] << endl;
}

int main() { test_2_wei_bag_problem1(); }