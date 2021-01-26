// To Lower Case

class Solution {
public:
    string toLowerCase(string str) {
        for(auto &c: str){
            if(c>='A' && c<='Z')
                c=char(c+32);
        }
        return str;
    }
};