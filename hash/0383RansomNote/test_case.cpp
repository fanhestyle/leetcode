/*

Input: ransomNote = "a", magazine = "b"
Output: false

Input: ransomNote = "aa", magazine = "ab"
Output: false

Input: ransomNote = "aa", magazine = "aab"
Output: true

bool canConstruct(string ransomNote, string magazine)
*/

#include "s1.hpp"

int main()
{
    Solution s;
    string magazine;
    string ransomNote;
    bool r, e;

    {
        ransomNote = "a";
        magazine = "b";
        r = s.canConstruct(ransomNote, magazine);
        e = false;
        assert(e == r);
    }

    {
        ransomNote = "a";
        magazine = "b";
        r = s.canConstruct(ransomNote, magazine);
        e = false;
        assert(e == r);
    }

    {
        ransomNote = "aa";
        magazine = "aab";
        r = s.canConstruct(ransomNote, magazine);
        e = true;
        assert(e == r);
    }

    cout << "PASS!" << endl;
}