// Defanging an IP Address

class Solution {
public:
    string defangIPaddr(string address) {
        string s;
        for (auto c: address){
            if( c == '.') s+="[.]";
            else s+=c;
        }
        return s;
    }
};