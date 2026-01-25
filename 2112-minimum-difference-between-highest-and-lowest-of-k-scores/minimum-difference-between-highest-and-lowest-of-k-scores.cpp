// class Solution {
// public:
//     int minimumDifference(vector<int>& nums, int k) {
//         int diff = 0;
//         int sum = 0;
//         int mini=INT_MAX;
//         int n=nums.size();
//         vector<int>ans;
//         sort(nums.begin(),nums.end());

//         if(nums.size()==1)return 0;
//         int i=0,j=n-1;

//         while( j-i>k-1 && i<j && i<nums.size()-1 && j>0){

//             cout<<" index of i: "<<i<<" and i+1: "<<i+1<<endl;
            
//             cout<<" value of i: "<<nums[i]<<" and i+1: "<<nums[i+1]<<endl;
//             cout<<endl;
//             int d1= abs(nums[i+1]-nums[i]);
//             cout<<" d1 "<<d1<<endl;

//             cout<<endl;

//             cout<<" index of j: "<<j<<" and j-1: "<<j-1<<endl;

//             cout<<" value of j: "<<nums[j]<<" and j-1: "<<nums[j-1]<<endl;
            
            
//             int d2= abs(nums[j]-nums[j-1]);
//             cout<<" d2 "<<d2<<endl;
//             cout<<endl;


//             if(d1>d2){
//                 i++;
//             }else{
//                 j--;
//             }

//             cout<<" index of i: "<<i<<" and i+1: "<<i+1<<endl;
            
//             cout<<" value of i: "<<nums[i]<<" and i+1: "<<nums[i+1]<<endl;

//             cout<<"end of the loop"<<endl;

//             // ans.push_back(d1);
//             // ans.push_back(d2);
//             // cout<<"diff "<<diff<<endl;
//             // sum= diff;
//             // cout<<"sum "<<sum<<endl;

//             // ans.push_back(sum);
//         }
//         while(i<j){
//             cout<<endl;
//             int diff = nums[i+1]-nums[i];
//             cout<<"diff is "<<diff<<endl;
//             sum+=diff;
//             i++;
//             cout<<endl;
//         }

        
//         return sum;

//     }
// };











class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        if (k == 1) return 0;

        sort(nums.begin(), nums.end());
        int ans = INT_MAX;
        for(auto a:nums)cout<<a<<" ";

        for (int i = 0; i + k - 1 < nums.size(); i++) {
            ans = min(ans, nums[i + k - 1] - nums[i]);
        }
        return ans;
    }
};
