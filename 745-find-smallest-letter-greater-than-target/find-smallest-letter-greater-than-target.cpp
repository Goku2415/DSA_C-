class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int mini =INT_MAX;
        int i=0,n=letters.size();
        while(i<n){
            int val = target ;
            int num = letters[i];
            if ( letters[i] > target){
                mini = min(num , mini);
            }
                i++;
        }
        char ans= char(mini) ;
        if(mini== INT_MAX){
            return letters[0];

        }
        
        
        return ans;
    }
};