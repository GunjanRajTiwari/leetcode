// Best Time to Buy and Sell Stock

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i=0,j=1, res=0;
        while (j<prices.size()){
            if(prices[j]>prices[i]){
                res = max(res, prices[j]-prices[i]);
                j++;
            } else {
                i=j;
                j++;
            }
        }
        return res;
   