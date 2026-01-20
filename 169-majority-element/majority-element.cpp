class Solution {
public:
    
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n= nums.size();
        int key = n/2 + 1;
        int i=0,j=n-1;
        int mid = i+(j-i)/2;
        return nums[mid];
    }
};