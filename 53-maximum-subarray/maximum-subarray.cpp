class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curelement =0;
        int maxi = INT_MIN;
        
        // if(nums.size()<1){
        //     if(nums[0]>0){
        //         return nums[0];
        //     }
        // }

        for(int i=0;i<nums.size();i++){
            curelement= max(nums[i], curelement + nums[i]);
            maxi = max(maxi,curelement);
        }


        return maxi;

        
    }
};
