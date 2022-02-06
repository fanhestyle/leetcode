#include "../../testutils/binarytree_utils.hpp"
#include "../../testutils/debug.hpp"
#include "../../testutils/linklist_utils.hpp"
#include "../../testutils/twodarray_equal.hpp"
#include <bits/stdc++.h>
using namespace std;

// brutal force

class Solution
{
private:
    string trackString;

public:
    bool wordBreak(string s, vector<string>& wordDict)
    {
        trackString = "";
        return dfs(s, wordDict);
    }

    bool dfs(string s, vector<string>& wordDict)
    {
        if (trackString.size() > s.size())
            return false;

        if (trackString == s)
        {
            return true;
        }

        for (int i = 0; i < wordDict.size(); i++)
        {
            trackString += wordDict.at(i);
            wordDict.erase(find(wordDict.begin(), wordDict.end(), wordDict[i]));
            if (dfs(s, wordDict))
                return true;
        }

        return false;
    }
};