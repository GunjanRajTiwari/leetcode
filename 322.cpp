// Coin change

class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int dp[amount+1];
        int i;
        fill(dp,dp+amount+1,amount+1);
        sort(coins.begin(),coins.end());
        dp[0]=0;
        for(i=1;i<=amount;i++){
            for(auto c: coins){
                if(c<=i){
                    dp[i]=min(dp[i],dp[i-c]+1);
                } else break;
            }
        }
        return dp[amount]==amount+1?-1:dp[amount];
    }
};