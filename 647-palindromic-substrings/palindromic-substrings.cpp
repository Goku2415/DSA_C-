class Solution {
public:

    int expand(string s, int i , int j){
        int count=0;
        while(i>=0 && j<s.length() && s[i]==s[j]){
            count++;i--;j++;

        }
        return count;
    
    }


    int countSubstrings(string s) {
        int ans=0,odd,even;

        for(int i=0; i<s.length();i++){
            //every time the is upgraded we call both odd and even and i value is send, since each subset is itself a palindrom so it is being checked using odd call and if the string is even string then the even call helps counting the subset other wise the even call is zero in odd case.
            odd = expand(s,i,i);
            even = expand(s,i,i+1);
            ans=ans+odd+even;

        }        
        return ans;
    }
};