// Decompress Run-Length Encoded List

class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> ans;
        ans.reserve(999);
        for(int i=0; i<nums.size();i+=2){
            while(nums[i]--)
                ans.push_back(nums[i+1]);
        }
        return ans;
    }
};