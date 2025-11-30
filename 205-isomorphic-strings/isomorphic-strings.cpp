class Solution {
public:
    bool isIsomorphic(string s, string t) {

        char map[256] = {0};
        char istmapped[256] = {0};

        for(int i=0;i<s.size();i++){
            if(map[s[i]]==0 && istmapped[t[i]] == 0){
            map[s[i]]=t[i];
            istmapped[t[i]] = true;

            }
        }

        for(int i=0;i<s.size();i++){
            if(map[s[i]] != t[i]){
                return false;
            }
        }
        return true;
        
    }
};