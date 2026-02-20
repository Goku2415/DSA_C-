class Solution {
public:
    string removeDuplicates(string s) {
        int n = s.length();
        string k;
        int i=0;

        stack<char>st;
        
        while(i<n){
            if(!st.empty() && st.top()==s[i]){
                st.pop();
                i++;
            }else{
                st.push(s[i]);
                i++;
            }
        }

        while(!st.empty()){
            k+=st.top();
            st.pop();
        }
        reverse(k.begin(),k.end());
        return k;





    }
};
        //This was solved by me, just remember to not access the k string when nothing is inside the string
        // while(i<n){
        //     if(i==0){
        //         k.push_back(s[i++]);
        //     }else if(k.length()>0 && s[i]==k.back()  ){
        //         k.pop_back();
        //         i++;
        //     }
        //     else {
        //         k.push_back(s[i++]);
        //     }
        // }
        // return k;