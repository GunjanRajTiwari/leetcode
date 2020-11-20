// Two Sum

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mp;
        int i = 1;
        for(auto it:nums){
            if(mp[it]){
                return {(mp[it]-1),(i-1)};
            }
            mp[target-it]=i;
            i++;
        }
        return {};
    }
};