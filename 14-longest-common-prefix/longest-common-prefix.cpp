// class Solution {
// public:
//     string longestCommonPrefix(vector<string>& strs) {

//         string temp,ans;
//         bool flag = true;
//         int k = 0;
//          if (strs.empty()) return "";

//         for(int i=0;i<strs.size();i++){
//             int j =0;
//             while(j<strs[i].size()  ){
//                 if(i==0){
//                     temp.push_back(strs[i][j]);
//                 }else{
//                     if(temp[k]==strs[i][j]){
//                         ans.push_back(strs[i][j]);
//                         k++;
//                     }       
//                 }


//             }
//             temp = ans;
//             k=0;
//             ans="";
//         }
//         return temp;
    
//     }
// };




class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

        string prefix = strs[0];

        for (int i = 1; i < strs.size(); i++) {
            int j = 0;
            while (j < prefix.size() && j < strs[i].size() &&
                   prefix[j] == strs[i][j]) {
                j++;
            }
            prefix = prefix.substr(0, j);

            if (prefix.empty()) return "";
        }

        return prefix;
    }
};
