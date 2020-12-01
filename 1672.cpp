// Richest Customer Wealth

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxSum = 0, eachSum;
        for(auto i:accounts){
            eachSum = 0;
            for(auto j:i){
                eachSum += j;
            }
            if (maxSum < eachSum) maxSum = eachSum;
        }
        return maxSum;
    }
};