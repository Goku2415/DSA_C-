class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int n=s.size();
        string a(n,' ');
        for(int i=0;i<s.size();i++){
            a[indices[i]]=s[i];
        
        }
        return a;
    }
};