// Maximum Nesting Depth of the Parentheses

class Solution {
public:
    int maxDepth(string s) {
        int count=0, ans = 0;
        for(auto i: s){
            if(i=='(') count+=1;
            else if(i==')') count-=1;
            ans = max(ans,count);
        }
        return ans;
    }
};