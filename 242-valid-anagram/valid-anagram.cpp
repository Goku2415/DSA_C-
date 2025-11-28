class Solution {
public:

    
    //Method 1
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        int i=0;
        while(i<t.size() ){          
            if(s[i]!=t[i] || s.size() !=t.size()){
                return false;
            } 
            i++;   
        }
        return true;

    }


    //Method 2
    // bool isAnagram(string s, string t) {
    //     sort(s.begin(), s.end());
    //     sort(t.begin(), t.end());
    //     int i=0;
    //     while(i<t.size() ){
    //         char ans= s[i]^t[i];
    //         if(ans!= 0 || s.size()!=t.size()){
    //             return false;
    //         }
    //         i++;
           
    //     }
    //     return true;

    // }
};