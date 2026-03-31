class Solution {
public:
    int mySqrt(int x) {
        int k = x;
        int sqt = sqrt(k);
        int r = round(sqt);

        return r;
        
    }
};