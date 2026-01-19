class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int count =0;
        int lsum=0,rsum=0;
        for(int i=0;i<nums.size()-1;i++){

            int j=0;
            while(j<=i){
                lsum+=nums[j++];
            }            

            int k=j;
            while(k<nums.size()){
                rsum+=nums[k++];
            }

            int diff= abs(lsum-rsum);
            if(diff%2==0){
                count++;
            }
            lsum=0;rsum=0;
        }
        return count;
        
    }
};