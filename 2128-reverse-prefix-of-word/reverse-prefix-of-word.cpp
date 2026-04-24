class Solution {
public:
    string reversePrefix(string word, char ch) {
        char a ;

        int i=0;
        while(word[i]!=ch && i<word.size()){
            i++;
        }
        if(i==word.size() && word[i] != ch )return word;

        int j=0, k =i;
        while(j<=k){
            swap(word[j++],word[k--]);
        }

        return word;
    }
};