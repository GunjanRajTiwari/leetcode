// Island Perimeter

class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int i, j, ans=0;
        for (i=0; i<grid.size(); i++){
            for (j=0; j<grid[i].size(); j++){
                if(grid[i][j]==1) {
                    ans+=4;
                    if(i!=0 && grid[i-1][j]==1) ans -= 2;
                    if(j!=0 && grid[i][j-1]==1) ans -= 2;
                    cout << ans <<' ';
                }
            }
        }
        return ans;
    }
};

//only 12.3%