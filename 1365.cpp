// How Many Numbers Are Smaller Than the Current Number

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ans;
        int hash[101]={};
        for(auto i: nums){
            hash[i]++;
        }
        int count = 0,cur;
        for(auto i=0; i<101; i++){
            if(hash[i]!=0){
                cur = hash[i];
                hash[i] = count;
                count += cur;
            }
        }
        for(auto i: nums){
            ans.push_back(hash[i]);
        }
        return ans;
    }
};