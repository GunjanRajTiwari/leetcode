// Count the Number of Consistent Strings

class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        bool al[26] = {};
        int ans = words.size();
        for(auto c: allowed) al[c-'a']=true;
        for(auto s: words){
            for(auto c: s){
                if(!al[c-'a']){
                    ans--;
                    break;
                }
            }
        }
        return ans;
    }
};