// Factorial Trailing Zeros

class Solution {
public:
    int trailingZeroes(int n) {
        int ans=0;
        for(int i = 1; i<=log(n)/log(5); i++){
            ans += n/pow(5,i);
        }
        return ans;
    }
};