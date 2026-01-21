class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        int n = nums.size();
        if (n % 2 != 0) return false;
        unordered_map<int,int>freq;
        for(auto a:nums){
            freq[a]++;
            if (freq[a] > 2) return false; 
        }
        for(auto a :nums){
            if(freq[a]>2){
                return false;
            }
        }
        
        return true;
    }
};
