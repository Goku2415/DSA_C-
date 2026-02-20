
class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        // if (k == 1) return 0;

        // sort(nums.begin(), nums.end());
        // int ans = INT_MAX;
        // for(auto a:nums)cout<<a<<" ";

        // for (int i = 0; i + k - 1 < nums.size(); i++) {
        //     ans = min(ans, nums[i + k - 1] - nums[i]);
        // }
        // return ans;


        sort(nums.begin(),nums.end());
        if(k==1)return 0;
        
        int mini = INT_MAX;
        for(int i=0; i+k-1<nums.size(); i++){
            mini= min(mini,nums[i+k-1]-nums[i]);
        }
        return mini;




    }
};
