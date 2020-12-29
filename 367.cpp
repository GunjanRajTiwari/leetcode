// Valid Perfect Square

class Solution {
public:
    bool isPerfectSquare(int num) {
        int l=0, h=num/2+1;
        long long mid, sq;
        while (h>=l){
            mid = (l+h)>>1;
            sq = mid*mid;
            if(sq == num){
                return 1;
            }
            if (sq < num){
                l= mid+1;
            } else {
                h = mid -1;
            }
        }
        return 0;
    }
};