class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size(); int m = intervals[0].size();
        vector<vector<int>> ans; vector<int> result;
        sort(intervals.begin(), intervals.end());

        ans.push_back(intervals[0]);

        for (int i = 1; i < n; i++) {

            if (intervals[i][0] <= ans.back()[1]) {
                ans.back()[1]= max(ans.back()[1] , intervals[i][1]);
                
            } else {
                ans.push_back(intervals[i]);
            }
                
        }
        return ans;
    }
};











// class Solution {
// public:
//     vector<vector<int>> merge(vector<vector<int>>& intervals) {

//         if(intervals.empty()) return {};

//         sort(intervals.begin(), intervals.end());

//         vector<vector<int>> ans;
//         ans.push_back(intervals[0]);

//         for(int i = 1; i < intervals.size(); i++) {

//             if(intervals[i][0] <= ans.back()[1]) {
//                 // Overlap → merge
//                 ans.back()[1] = max(ans.back()[1], intervals[i][1]);
//             }
//             else {
//                 // No overlap → push new interval
//                 ans.push_back(intervals[i]);
//             }
//         }

//         return ans;
//     }
// };
