class Solution {
public:
    int alternateDigitSum(int n) {
        string k = to_string(n);
        int i=0;
        int sum=0;
        while(i<k.size()){
            int digit = k[i] - '0';

            if(i%2!=0){
                sum=sum -digit;
            }else{
                sum=sum +digit;
            }
            i++;
        }
        return sum;
        
    }
};