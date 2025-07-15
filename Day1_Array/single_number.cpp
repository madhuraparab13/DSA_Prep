// Problem : Single Number
// Link : https://leetcode.com/problems/single-number/
// Approach : Using Bitwise Operator


class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int sum = 0;
        for(int val : nums){
            sum ^= val;
        } 
        return sum;       
    }
};
