// Problem : Maximum Subarray
// Link : https://leetcode.com/problems/maximum-subarray/?envType=problem-list-v2&envId=array
// Approach : Kadane's Algorithm

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0, maxSum=INT_MIN;
        for(int a : nums){
            sum += a;
            maxSum = max(sum, maxSum);

            if(sum < 0){
                sum = 0;
            }
        }
        return maxSum;
    }
};