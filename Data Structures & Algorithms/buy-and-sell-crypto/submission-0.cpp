class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = prices[0];
        int ans = INT_MIN;
        for(int i =1; i<prices.size(); i++){
            if(prices[i]>prices[i-1]){
                ans = max(ans, prices[i]-minPrice);
            }else{
                minPrice = min(minPrice, prices[i]);
            }
        }
        return (ans == INT_MIN)? 0 : ans;
    }
};
