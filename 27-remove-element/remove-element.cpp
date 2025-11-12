class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int given = val;
        int k = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == given) {
                continue;
            } else {
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};