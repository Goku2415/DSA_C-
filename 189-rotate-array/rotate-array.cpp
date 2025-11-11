class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        int n = nums.size();
        vector<int> arr(n);

        for(int i=0;i<n;i++){
            int j = (i+k)%n;
            arr[j]=nums[i];
        }
        nums= arr;


    }
};