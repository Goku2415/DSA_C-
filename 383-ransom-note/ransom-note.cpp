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
            cout<<"freq of ransomNote element: "<<ransomNote[i] <<" "<<freq1[ransomNote[i]]<<endl;
            i++;
        }

        i=0;    
        while(i<m){
            freq2[magazine[i]]++;
            cout<<"freq of magazine element: "<<magazine[i]<<" "<<freq2[magazine[i]]<<endl;
               i++;
        }

        for(auto ch : ransomNote){
            cout<<"inside for "<<ch<<endl;
            cout<<"freq1 ele "<<freq1[ch]<<endl;
            cout<<"freq2 ele "<<freq2[ch]<<endl;
            if(freq2[ch]< freq1[ch]){
                return false;
            }
        }
        return true;
    }
};