// Pascal's Triangle

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
        int i, j;
        for (i = 0; i<numRows; i++){
            vector<int> temp(i+1,1);
            for(j=1; j<i; j++){
                temp[j]= result[i-1][j-1] + result[i-1][j];
            }
            result.push_back(temp);
        }
        return result;
    }
};