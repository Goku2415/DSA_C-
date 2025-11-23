class Solution {
public:
    bool isUgly(int n) {
        bool flag = false;
        if(n<=0) return false;

        if (n>0) {
            while (n % 2 == 0) n /= 2;
            while (n % 3 == 0) n /= 3;
            while (n % 5 == 0) n /= 5;
        }
        if(n>1){
            flag = false;
        }
        else{
            flag = true;
        }
        
        return flag;
    }
};