class Solution {
public:
  vector<int> leftRightDifference(vector<int>& nums) {
    int i =1,sum=0,acc=0;
        vector<int>Lans;
        vector<int>Rans;
        Lans.push_back(sum);
        Rans.push_back(sum);
        while(i<nums.size()){
            if(i<nums.size()){
                sum+=nums[i-1];
            }
            Lans.push_back(sum);
            i++;
        }
        sum=0;

        int j=nums.size()-1;
        while(j>0){
            j--;
            if(j >=0){
                sum+=nums[j+1];
            }
        Rans.push_back(sum);
        }
        
        reverse(Rans.begin(),Rans.end());
        
        for(int i=0,j=0;i<nums.size();i++,j++){
            nums[i] = abs(Lans[i]-Rans[j]);
        }
        return nums;
    }
};