// Climbing Stairs

class Solution {
public:
    int climbStairs(int n) {
        if(n<3){
            return n;
        }
        int i,a=1,b=2,c;
        for(i=2; i<n; i++){
            c=a+b;
            a=b;
            b=c;
        }
        return c;
    }
};