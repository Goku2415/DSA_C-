class Solution {
public:
    string removeDuplicates(string s) {
        int n = s.length();
        string k;
        int i=0;
        
        while(i<n){
            if(i==0){
                k.push_back(s[i++]);
            }else if(k.length()>0 && s[i]==k.back()  ){
                k.pop_back();
                i++;
            }
            else {
                k.push_back(s[i++]);
                
            }
            
        }
        
        return k;
    }
};