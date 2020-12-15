// Running sum of 1d array

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int i;
        for(i = 1; i<nums.size(); i++){
            nums[i] += nums[i-1];
        }
        return nums;
    }
};