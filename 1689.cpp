// Partitioning Into Minimum Number Of Deci-Binary Numbers

class Solution {
public:
    int minPartitions(string n) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        int ans = '1';
        for (char c: n){
            ans = max(ans,int(c));
        }
        return ans-'0';
    }
};