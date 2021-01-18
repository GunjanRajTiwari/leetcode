// Unique paths

// Inefficient
class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> arr(m, vector<int>(n,1));
        int i,j;
        for(i=1; i<m; i++){
            for(j=1; j<n; j++){
                arr[i][j]=arr[i-1][j]+arr[i][j-1];
            }
        }
        return arr[m-1][n-1];
    }
};

// Efficient
class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<int> arr(n,1);
        int i,j;
        for(i=1; i<m; i++){
            for(j=1; j<n; j++){
                arr[j]+=arr[j-1];
            }
        }
        return arr[n-1];
    }
};