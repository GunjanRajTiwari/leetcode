// Best Time to Buy and Sell Stock II

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans=0, i;
        for (int i=1; i<prices.size(); i++){
            if (prices[i]>prices[i-1]){
                ans+=prices[i]-prices[i-1];
            }
        }
        return ans;
    }
};