// Daily Temperatures

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) {
        int i;
        vector<int> ans(T.size(),0), stk;
        for(i = T.size()-1; i>=0; i--){
            while(!stk.empty() && T[stk.back()]<=T[i])
                stk.pop_back();
            if(!stk.empty())
                ans[i]=stk.back()-i;
            stk.push_back(i);
        }
        return ans;
    }
};