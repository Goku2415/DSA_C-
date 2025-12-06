class Solution {
public:
    
    int firstUniqChar(string s) {
        int freq[256]={0};
        for(unsigned char c:s){
            freq[c]++; 
            
        }
        for(int i=0;i<s.length();i++){
            if(freq[(unsigned char)s[i]]==1){
                return i;
            }

        }
        return -1;

    }
};