class Solution {
public:
    long long sumAndMultiply(int n) {
        int i=0;
        long long digit=0,sum=0,output=0 ;
        vector<int>ans;
        while(n>=1){
            digit = n%10;
            if(digit>0){
                ans.push_back(digit);
            }
            sum +=digit;
            n/=10;
        }

        for(auto a:ans){
            output= a*pow(10,i++) + output;

        }
        long long result= output*sum;
        return result;
        
    }
};