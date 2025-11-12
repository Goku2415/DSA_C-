class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans;
       
        int n = nums.size();
        for( int i=0;i<n;i++){
            int index = abs(nums[i]) - 1;

            if(nums[index]<0){
                ans.push_back(abs(nums[i]));
            }else{
                nums[index] *=-1;   
            }
        }

        
        return ans;
    }
};



// class Solution {
// public:
//     vector<int> findDuplicates(vector<int>& nums) {
//         vector<int> ans;
//         int n = nums.size();

//         for (int i = 0; i < n; i++) {
//             int index = abs(nums[i]) - 1;   // map value -> index

//             if (nums[index] < 0) {
//                 // already visited -> duplicate
//                 ans.push_back(abs(nums[i]));
//             } else {
//                 // mark visited
//                 nums[index] *= -1;
//             }
//         }

//         return ans;
//     }
// };