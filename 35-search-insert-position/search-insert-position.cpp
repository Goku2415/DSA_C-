class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i = 0,j; 
        int n = nums.size();
        for(i=0;i<n;i++){
            if(nums[i]>=target){
                return i;
            }
        }
        return nums.size();
    }
};