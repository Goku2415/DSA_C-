class Solution {
public:
    int sqr(int a) {return a*a;}

    int sumOfSquares(vector<int>& nums) {
        int i=1;long long sum=0;
        int n = nums.size();
        while(i<=n){
            if(n%i==0){
                sum=sum+sqr(nums[i-1]);
            }
            i++;
        }
        return sum;
    }
};