// Number of Good Pairs

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count[101] = {};
        int res = 0;
        for(int i: nums){
            res += count[i]++;
        }
        return res;
    }
};