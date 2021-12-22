#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<string> findItinerary(vector<vector<string>>& tickets)
    {
        unordered_map<string, std::map<string, int>> hash;
        buildHash(tickets, hash);

        vector<string> track = {"JFK"};
        dfs(hash, track, tickets.size());
        return track;
    }

    bool dfs(unordered_map<string, map<string, int>>& hash,
             vector<string>& track, int N)
    {
        if (track.size() == N + 1)
        {
            return true;
        }

        map<string, int>& nextStation = hash[track.back()];
        for (auto it = nextStation.begin(); it != nextStation.end(); it++)
        {
            if (it->second > 0)
            {
                track.push_back(it->first);
                it->second --;
                if (dfs(hash, track, N))
                    return true;
                track.pop_back();
                it->second ++;
            }
        }
        return false;
    }

    void buildHash(vector<vector<string>>& tickets,
                   unordered_map<string, std::map<string, int>>& targets)
    {
        for (const vector<string>& vec : tickets)
        {
            targets[vec[0]][vec[1]]++; // 记录映射关系
        }
    }
};

/*
class Solution {
private:
// unordered_map<出发机场, map<到达机场, 航班次数>> targets
unordered_map<string, map<string, int>> targets;
bool backtracking(int ticketNum, vector<string>& result) {
    if (result.size() == ticketNum + 1) {
        return true;
    }
    for (pair<const string, int>& target : targets[result[result.size() - 1]]) {
        if (target.second > 0 ) { // 记录到达机场是否飞过了
            result.push_back(target.first);
            target.second--;
            if (backtracking(ticketNum, result)) return true;
            result.pop_back();
            target.second++;
        }
    }
    return false;
}
public:
    vector<string> findItinerary(vector<vector<string>>& tickets) {
        targets.clear();
        vector<string> result;
        for (const vector<string>& vec : tickets) {
            targets[vec[0]][vec[1]]++; // 记录映射关系
        }
        result.push_back("JFK"); // 起始机场
        backtracking(tickets.size(), result);
        return result;
    }
};
*/