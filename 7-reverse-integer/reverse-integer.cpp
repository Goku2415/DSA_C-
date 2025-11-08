class Solution {
public:
    int reverse(int x) {

        int i = 0;
        long long sum = 0;
        int mod;
        if (x < 0 && x>INT_MIN) {
            unsigned long k = -x;

            while (k>0) {
                 if(sum>INT_MAX/10 || sum <INT_MIN/10){
                    return 0;
                }
                mod = k % 10;
                sum = sum * 10 + mod;

                k /= 10;
            }
            sum = -sum;


        } else {
            while (x >= 1) {
                mod = x % 10;
                if(sum>INT_MAX/10 || sum <INT_MIN/10){
                    return 0;
                }else{
                sum = sum * 10 + mod;

                }

                x /= 10;
            }

        }
        return sum;
    }
};