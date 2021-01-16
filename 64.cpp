// Min Path Sum

class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size() , n = grid[0].size(),i,j;
        vector<vector<int>> dp(m, vector<int> (n,INT_MAX));
        dp[0][0]=grid[0][0];
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                if(i!=m-1){
                    dp[i+1][j] = min(dp[i+1][j],dp[i][j]+grid[i+1][j]);
                }
                if(j!=n-1){
                    dp[i][j+1] = min(dp[i][j+1],dp[i][j]+grid[i][j+1]);
                }
            }
        }
        return dp[m-1][n-1];
    }
};

// Better solution

class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size() , n = grid[0].size(),i,j;
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                if(i==0 && j>0) grid[i][j] += grid[i][j-1];
                if(j==0 && i>0) grid[i][j] += grid[i-1][j];
                if(i>0 && j>0) grid[i][j] += min(grid[i-1][j], grid[i][j-1]);
            }
        }
        return grid[m-1][n-1];
    }
};