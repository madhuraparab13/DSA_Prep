// Problem : Palindrome Number
// Link : https://leetcode.com/problems/palindrome-number/

class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
            }

        long rev = 0;
        int digit, temp=x;
        while(x!=0){
            digit = x %10;
            rev = rev*10 + digit;
            x = x/10;
        }
        if(rev == temp) {
            return true;
            }
        else{
            return false;
            }

    }
};