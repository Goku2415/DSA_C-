class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        bool flag = false;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int a;
        for (int i = 0, j = i + 1; i < nums.size() - 1;i++,j++) {
            if (nums[i] == nums[j]) {
                flag = true;
            }
            
        }
        return flag;
    }
};