class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        int i=0;
        while(i<t.size() && i<s.size()){
            
            if(s[i]!=t[i] || s.size() !=t.size()){
                return false;
            } 
            i++;
           
        }
        return true;

    }
};