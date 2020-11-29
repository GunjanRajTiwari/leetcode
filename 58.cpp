// Length of Last Word

class Solution {
public:
    int lengthOfLastWord(string s) {
        int i, count=0,flag=0;
        for(i=s.length()-1; i>=0; i--){
            if(s[i]==' '){
                if(flag==0){
                    continue;
                }
                break;
            };
            flag = 1;
            count++;
        }
        return count;
    }
};