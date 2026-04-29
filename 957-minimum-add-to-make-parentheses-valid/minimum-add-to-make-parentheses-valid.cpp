class Solution {
public:
    int minAddToMakeValid(string s) {
        int open = 0;
        int close = 0;
        stack<char> st;
        int i = 0;
        while (i < s.length()) {
            if (s[i] == '(') {
                st.push('(');
                open++;
            } else {
                if (!st.empty()) {
                    if (s[i] == ')' && st.top() == '(') {
                        open--;
                        st.pop();
                    }
                }
                else{
                    close++;
                }
            }
            i++;
        }

        

        int ans = open + close;

        return ans;
    }
};