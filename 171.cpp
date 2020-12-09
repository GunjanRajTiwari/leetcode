// Excel Sheet Column Number

class Solution {
public:
    int titleToNumber(string s) {
        int n = s.size()-1;
        int res = 0;
        for(auto i:s){
            res += (int(i)-64)*pow(26,n);
            n--;
        }
        return res;
    }
};