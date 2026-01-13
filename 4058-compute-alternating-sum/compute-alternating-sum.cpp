class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int i=0;
        int sum1=0,sum2=0;
        if(nums.size()==1)return nums[0];

        while(i<nums.size() ){
            
            if( i==0 || i%2==0){
                sum1+=nums[i++];
            }else{
                sum2+=nums[i++];
            }
          
            
        }
        int ans = sum1-sum2;
        return ans;
        
    }
};