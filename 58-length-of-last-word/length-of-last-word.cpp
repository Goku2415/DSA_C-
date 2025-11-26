class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.length();
        int count = 0;
        for (int i = n - 1; i < n; i--) {
            if (s[i] == 32) {
                continue;
            } else {
                count++;
                if ( i==0||s[i - 1] == 32){
                    break;
                }
            }
        }
        return count;
    }
};