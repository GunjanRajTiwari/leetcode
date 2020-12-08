// Excel Sheet Column Title

class Solution {
public:
    string convertToTitle(int n) {
        string res ="";
        int r;
        while(n){
            r = (n-1)%26;
            res = char(r+int('A'))+res;
            n = (n-1)/26;
        }
        return res;
    }
};