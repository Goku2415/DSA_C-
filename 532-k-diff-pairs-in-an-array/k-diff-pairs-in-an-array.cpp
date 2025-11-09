class Solution {
public:
    int bs(vector<int>& nums,int s, int x) {
        int  e = nums.size() - 1, mid = (s + e) / 2;
        while (s <= e) {
            if (x == nums[mid]) {
                return mid;
            } else if (x > nums[mid]) {
                s = mid + 1;
            } else {
                e = mid - 1;
            }
            mid = (s + e) / 2;
        }
        return -1;
    }

    int findPairs(vector<int>& nums, int k) {

        sort(nums.begin(), nums.end());
        set<pair<int, int>> ans;

        for (int i = 0; i < nums.size(); i++) {
            int x = k + nums[i];

            if (bs(nums,i+1, x) != -1) {
                ans.insert({nums[i], x});
            }
        }
        return ans.size();
    };
};
