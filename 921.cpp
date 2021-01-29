// Minimum Add to make parentheses Valid

// Classical Approach
class Solution {
public:
    int minAddToMakeValid(string S) {
        int ans=0;
        vector<int> stk;
        stk.reserve(1000);
        for(auto c: S){
            if(stk.empty()) {
                stk.push_back(c);
                ans++;
            }
            else if (*stk.rbegin()=='(' && c==')') {
                stk.pop_back();
                ans--;
            }
            else {
                stk.push_back(c);
                ans++;
            }
        }
        return ans;
    }
};

// Optimized Approach

class Solution {
public:
    int minAddToMakeValid(string S) {
        int ans=0, ft=0;
        for(char c: S){
            if (c=='(') ++ans;
            else{
                if(ans==0) ft++;
                else ans --;
            }
        }
        return ans+ft;
    }
};