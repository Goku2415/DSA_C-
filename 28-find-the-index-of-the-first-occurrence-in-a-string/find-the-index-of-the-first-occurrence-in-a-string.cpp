class Solution {
public:
    int strStr(string haystack, string needle) {
            string h=haystack,n=needle;
            int i=0,j=0;

        while(j<h.length()){
            if(n[i]==h[j]){
                i++;j++;
                if(i==n.length())return j-i;//here since we compared i for  0 to 2 and did i++ , so no i = 3 i.e, equal to needle length so we say that full length of n has matched and so we return index by doing j-i;
            }
            else {
                j=j-i+1;i=0;
            }
        }
        return -1;


        





    }
};