class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<char>ans;
        int n = ransomNote.size();
        int m = magazine.size();
        int freq1[256]={0};
        int freq2[256]={0};
        int i = 0;
        while(i<n){
            freq1[ransomNote[i]]++;
            i++;
        }

        i=0;    
        while(i<m){
            freq2[magazine[i]]++;
               i++;
        }

        for(auto ch : ransomNote){
            if(freq2[ch]< freq1[ch]){
                return false;
            }
        }
        return true;
    }
};