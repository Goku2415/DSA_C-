class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int i=0,j=1;
        int n=nums.size();
        if(n==1)return true;
        for(int i=0,j=1;i<n-1&&j<n;){
           if(nums[i]<=nums[j]){
                i++,j++;
            }else{
                break;
            }
            if(i==n-1){
                cout<<"I reached last position"<<i<<endl;
                return true;
            }
        }
        for(int i=n-1,j=n-2;i>0&&j>=0;){
            if(nums[i]<=nums[j]){
                i--;j--;
            }else{
                break;
            }
            if(i==0){
             return true;   
            }
        }
        return false;
    }
};