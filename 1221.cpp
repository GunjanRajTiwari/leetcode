// Split a String Balanced Strings

class Solution {
public:
    int balancedStringSplit(string s) {
        int ans=0, c = 0;
        for(auto i: s) {
            c += i=='L'? 1 : -1;
            ans += c==0;
        }
        return ans;
    }
};