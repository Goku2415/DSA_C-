// class Solution {
// public:
//     bool isprime(int &maxi){
//         // cout<<"entered into isprime "<<endl;
//         int half =sqrt(maxi);
//         cout<<"value of half: "<<half<<endl;
//         int i=2;
//         while(i<half){
//             int ans= maxi%i;
//             if(ans==0) {
//                 cout<<"value of i : "<<i<<"and maxi "<<maxi<<endl;
//                 return false;
//             }
//             i++;
//         }
//         cout<<"true"<<endl;
//         return true;
//     }
//     int diagonalPrime(vector<vector<int>>& nums) {
//         int row=nums.size();
//         int col=nums[0].size();
//         int i=0,j=i,maxi=INT_MIN;
//         while(i<row){
//             maxi=max(maxi, nums[i][j]);
//             cout<<"this is first loop "<<maxi<<endl;
//             i++;j++;   
//         }
//         int k=0,l=row-1;
//         while(k<row && l>=0){
//             maxi = max(maxi, nums[k][l]);
//             cout<<"this is 2nd loop "<<maxi<<endl;
//             k++;l--;
//         }
//         if(isprime(maxi)){
//             cout<<"inside if condi"<<maxi<<endl;
//             return maxi;
//         }
//         return 0;
//     }
// };






class Solution {
public:
    bool isprime(int n) {
        if (n <= 1) return false;
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0)
                return false;
        }
        return true;
    }

    int diagonalPrime(vector<vector<int>>& nums) {
        int n = nums.size();
        int maxi = 0;

        // Primary diagonal
        for (int i = 0; i < n; i++) {
            if (isprime(nums[i][i])) {
                maxi = max(maxi, nums[i][i]);
            }
        }

        // Secondary diagonal
        for (int i = 0; i < n; i++) {
            int j = n - 1 - i;

            // 🔑 THIS LINE FIXES THE BUG
            if (i == j) continue;

            if (isprime(nums[i][j])) {
                maxi = max(maxi, nums[i][j]);
            }
        }

        return maxi;
    }
};
