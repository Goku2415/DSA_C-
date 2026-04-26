class Solution {
public:
    int calPoints(vector<string>& ops) {
        int i=0;
        stack<int>st;
        while(i<ops.size()){
            if(ops[i] == "+"){
                int a = st.top();  st.pop();
                int b = st.top();

                st.push(a);
                
                st.push(a+b);

            }else if(ops[i] == "D"){
                st.push(2* st.top());
            }else if(ops[i] == "C"){
                st.pop();
            }else{ 
                st.push(stoi(ops[i]));
            }
            i++;
        }
        int res = 0;
        while(!st.empty()){
            res += st.top();
            st.pop();
        }

        return res;
    }
};