class Solution {
public:
    // int bs (vector<int>& nums , int k,int n){
    //     int i=0,j=n-1;
    //     while(i<=j){
    //         int mid = i+(j-i)/2;
    //         if(nums[mid]== k){
    //             return nums[mid];
    //         }else {
    //             i++;j--;
    //         }
    //     }
    //     return -1;

    // }
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n= nums.size();
        int key = n/2 + 1;
        int i=0,j=n-1;
  //      int o =bs(nums,key,n);
            int mid = i+(j-i)/2;

        return nums[mid];
    }
};