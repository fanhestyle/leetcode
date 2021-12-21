#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<string> findItinerary(vector<vector<string>>& tickets)
    {
        unordered_map<string, unordered_set<string>> airportHash;
        buildHash(tickets, airportHash);

        vector<string> result = {"Z"};
        vector<string> track = {"JFK"};
        dfs(result, airportHash, track, tickets.size() + 1);
        return result;
    }

    int compareTwoString(vector<string>& lhs, vector<string>& rhs)
    {
        for (int i = 0; i < lhs.size(); i++)
        {
            if (lhs.at(i) > rhs.at(i))
                return 1;
            else if (lhs.at(i) < rhs.at(i))
                return -1;
        }
        return lhs.size() - rhs.size();
    }

    void dfs(vector<string>& result,
             unordered_map<string, unordered_set<string>>& hash,
             vector<string>& track, int N)
    {
        if (track.size() == N)
        {
            if (compareTwoString(track, result) < 0)
            {
                result = track;
                return;
            }
        }

        if (track.size() > N)
        {
            return;
        }

        unordered_set<string> nextStation = hash[track.back()];

        while (!nextStation.empty())
        {
            if (nextStation.size() > 0)
            {
                string curString = *(nextStation.begin());
                track.push_back(curString);
                nextStation.erase(curString);
                dfs(result, hash, track, N);
                track.pop_back();
                nextStation.insert(curString);
            }
        }
    }

    void buildHash(vector<vector<string>>& tickets,
                   unordered_map<string, unordered_set<string>>& hashTable)
    {
        for (int i = 0; i < tickets.size(); i++)
        {
            string key = tickets.at(i).at(0);
            string value = tickets.at(i).at(1);
            hashTable[key].insert(value);
        }
    }
};