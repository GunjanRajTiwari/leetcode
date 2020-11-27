// Count and Say

class Solution {
public:
    string countAndSay(int n) {
        string result = "1";
        while(--n){
            string number;
            int i=0;
            while(i<result.size()){
                int count = 1;
                while(i+1<result.size() && result[i]==result[i+1]){
                    ++i;
                    ++count;
                }
                number += to_string(count)+result[i];
                ++i;
            }
            result = number;
        }
        return result;
    }
};