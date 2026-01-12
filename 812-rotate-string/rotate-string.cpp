class Solution {
public:
    bool rotateString(string s, string goal) {
        int i=0,j=0;
        string ans;

        if(s.size() != goal.size()){
            return false;
        }

        s=s+s;

        if(s.find(goal)==string::npos){
            return false;
        }
        else{
            return true;
        }


        
        
    }
};