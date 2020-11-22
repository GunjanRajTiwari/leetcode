// Longest Common Prefix

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==0) return "";
        string result=strs[0], match="";
        int i,j;
        for(i=1; i<strs.size(); i++){
            j=0;
            match = "";
            while(j<result.length() && j<strs[i].length()){
                if (result[j] == strs[i][j]){
                    match+=result[j];
                    j++;
                } else {
                    break;
                }
            }
            result = match;
        }
        return result;
    }
};