class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // int minPrice = INT_MAX;
        // int maxProfit = INT_MIN;

        // for (int price : prices) {
        //     minPrice = min(minPrice, price);
        //     maxProfit = max(maxProfit, price - minPrice);
        // }

        // return maxProfit
        
        
        int minPrice = INT_MAX;
        int maxProfit = INT_MIN;

        for(int i=0;i<prices.size();i++){
            minPrice = min(prices[i], minPrice);
            maxProfit = max(maxProfit, prices[i] - minPrice);
        }
        
        
        return maxProfit;
        
        
    }
};
