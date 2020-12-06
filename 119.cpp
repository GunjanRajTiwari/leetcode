// Pascal's Triangle II

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        int i,j;
        vector<int> ans(rowIndex+1,1);
        for(i=1; i<rowIndex; i++){
            for(j=i; j>0; j--){
                ans[j] += ans[j-1];
            }
        }
        return ans;
    }
};