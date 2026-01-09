class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int sum = nums[0];
        vector<int> ans;
        int maxi = nums[0];

        ans.push_back(sum);

        for (int i = 1; i < nums.size(); i++) {

            if (nums[i] > nums[i - 1]) {
                sum += nums[i];
            } else {
                sum = nums[i];
            }

            ans.push_back(sum);
        }

        for (int i = 0; i < ans.size(); i++) {
            maxi = max(maxi, ans[i]);
        }

        return maxi;
    }
};
