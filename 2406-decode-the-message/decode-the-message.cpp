// class Solution {
// public:
//     string decodeMessage(string key, string message) {
//         char start ='a';
//         char mapping[300] = {0};

//         for(auto ch : key){
//             if(ch != ' ' && mapping[ch]== 0 ){
//                 mapping[ch] = start;
//                 start++;
//             }
//         }


//         string ans;
//         for(auto ch: message){
//             if(ch == ' '){
//                 ans.push_back(' ');
//             }else{

//             char decode = mapping[ch];
//             ans.push_back(decode);
//             }
//         }
        
//         return ans;
//     }
// };







//Hashmap method



class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map<char, char> mp;   // HASHMAP
        char start = 'a';

        // Build substitution mapping
        for (char ch : key) {
            if (ch != ' ' && mp.find(ch) == mp.end()) {
                mp[ch] = start++;
            }
        }

        // Decode the message
        string ans;
        for (char ch : message) {
            if (ch == ' ') {
                ans.push_back(' ');
            } else {
                ans.push_back(mp[ch]);
            }
        }

        return ans;
    }
};
