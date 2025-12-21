class Solution {
public:
    bool isPalindrome(string s) {
        string ans;
         for (char c : s) {
            if (isalnum(c)) {
                ans += tolower(c);
            }
        }


        int left=0,right=ans.size()-1;
        if((ans.size()==0 )||( ans.size()==1)){
            return true;
        }
        while(left<=right){
            if(ans[left]!=ans[right]){
                return false;
            }
            left++;right--;
        }
        return true;
              
    }
};