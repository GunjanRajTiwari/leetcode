// Smallest Range I

class Solution {
public:
    int smallestRangeI(vector<int>& A, int K) {
        int l,h;
        l = *min_element(A.begin(),A.end());
        h = *max_element(A.begin(),A.end());
        if((h-l)<=2*K) return 0;
        else return(h-l-2*K);
    }
};