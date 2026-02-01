class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int mini =INT_MAX;
        int i=0,n=letters.size();
        while(i<n){
            int val = target ;
            int num = letters[i];
            cout<<"val is : "<<val<<endl;
            cout<<"num is : "<<num<<endl;
            // if(num==val){
            //     i++;
            // }
            // cout<<"letter : "<<letters[i]<<endl;
            // if(num<=val){
            //     i++;
            // }
            if ( letters[i] > target){

                cout<<"letter : "<<letters[i]<<endl;
                mini = min(num , mini);
                cout<<"mini is : "<<mini<<endl;
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