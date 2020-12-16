// XOR Operation in an Array

class Solution {
public:
    int xorOperation(int n, int start) {
        int i,ans=0;
        for(i=0;i<n;i++){
            ans ^= start+2*i;
        }
        return ans;
    }
};