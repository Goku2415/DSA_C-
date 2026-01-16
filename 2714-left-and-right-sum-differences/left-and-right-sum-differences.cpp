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
            // cout<<"This is the summm "<<sum<<endl;
            Lans.push_back(sum);
            i++;
            // cout<<"This is the array element"<<Lans<<endl;
        }
        for(auto a:Lans)cout<<"This is the array after reverse"<<a<<endl;

        sum=0;

        int j=nums.size()-1;
        while(j>0){
            j--;
            if(j >=0){
                sum+=nums[j+1];
            }
            // cout<<"THis is the sum2  "<<sum<<endl;
            Rans.push_back(sum);
            // cout<<"this is the array element"<<Rans<<endl;
        }
        
        reverse(Rans.begin(),Rans.end());
        for(auto a:Rans)cout<<"This is the array after reverse"<<a<<endl;

        for(int i=0,j=0;i<nums.size();i++,j++){
            nums[i] = abs(Lans[i]-Rans[j]);
            cout<<"this is the final array elements"<<nums[i]<<endl;

        }
        return nums;
    }
};