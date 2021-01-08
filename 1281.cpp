// Subtract the Product and Sum of Digits of an Integer

class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0, pro = 1, rem;
        while(n){
            rem = n%10;
            sum+=rem;
            pro*=rem;
            n /= 10;
        }
        return pro-sum;
    }
};