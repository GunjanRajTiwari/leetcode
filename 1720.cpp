// Decode XORed Array

class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> ans = {first};
        for (auto i: encoded){
            ans.push_back(ans.back()^i);
        }
        return ans;
    }
};