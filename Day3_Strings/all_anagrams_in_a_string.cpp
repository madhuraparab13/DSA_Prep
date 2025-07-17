// Problem : All Anagrams in a String
// Link : https://leetcode.com/problems/find-all-anagrams-in-a-string/
//Approach : Sliding Window + Frequency

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
          vector<int> result;
    if (s.length() < p.length()) return result;

    vector<int> pCount(26, 0), windowCount(26, 0);
    int pLen = p.length();

    for (char ch : p) {
        pCount[ch - 'a']++;
    }

    for (int i = 0; i < pLen; ++i) {
        windowCount[s[i] - 'a']++;
    }

    if (windowCount == pCount) result.push_back(0);

    for (int i = pLen; i < s.length(); ++i) {
        windowCount[s[i] - 'a']++;                  
        windowCount[s[i - pLen] - 'a']--;           

        if (windowCount == pCount) result.push_back(i - pLen + 1);
    }

    return result;
    }
};