class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int>ans;
        int sum=0;
        
        for(int i=0;i<nums.size();i++){
                ans[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++){
            if(ans[nums[i]]==1){
                sum+=nums[i];
            }
        }

        return sum;
    }
};