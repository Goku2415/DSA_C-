class Solution {
public:
    bool isPalindrome(int x) {
        int num = x;
        long ans = 0;

        if (x < 0) {
            return false;
        }
         else {
            for (int i = 0;num!=0 ; i++) {
                int rem = num % 10;
                ans = (ans * 10) + rem;
                num = num/10;
            }
        }
        if (ans == x) {
            return true;
        } else
            return false;
    }
};