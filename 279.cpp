// Perfect squares

class Solution {
    int dp[10001] = {};
public:
    int numSquares(int n) {
        memset(dp,-1,sizeof(dp));
        for(int i=0; i<=n; ++i){
            if(i<4) dp[i] = i;
            else {
                int ways = 5;
                for(int j = 1; j*j<=i; ++j){
                    ways = min(ways, dp[i - j*j]+1);
                }
                dp[i] = ways;
            }
        }
        return dp[n];
    }
};