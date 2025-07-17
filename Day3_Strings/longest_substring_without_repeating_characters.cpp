// Problem : Longest Substring without Repeating Characters
// Link : https://leetcode.com/problems/longest-substring-without-repeating-characters/
//Approach : Sliding Window 

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> lastIndex;
    int maxLen = 0, start = 0;

    for (int end = 0; end < s.length(); ++end) {
        char current = s[end];

        if (lastIndex.count(current) && lastIndex[current] >= start) {
            start = lastIndex[current] + 1; 
        }

        lastIndex[current] = end; 
        maxLen = max(maxLen, end - start + 1); 
    }

    return maxLen;
    }
};