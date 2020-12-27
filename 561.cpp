// Array Partion I

class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int i, sum=0;
        sort(nums.begin(), nums.end());
        for(i=0; i<nums.size(); i+=2) {
            sum+=nums[i];
        }
        return sum;
    }
};

// Can be done using hashmap in less time