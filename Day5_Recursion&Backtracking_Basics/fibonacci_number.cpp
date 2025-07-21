// Problem : Fibonacci Number
// Link : https://leetcode.com/problems/fibonacci-number/description/
//Approach : Plain Recursion 

class Solution {
public:
    int fib(int n) {
        if (n == 0) return 0;
    int a = 0, b = 1;
    for (int i = 2; i <= n; i++) {
        int temp = a + b;
        a = b;
        b = temp;
    }
    return b;
    }
};