// Roman to Integer

class Solution {
public:
    int val(char c){
        switch (c){
            case 'I':
                return 1;
            case 'V':
                return 5;
            case 'X':
                return 10;
            case 'L':
                return 50;
            case 'C':
                return 100;
            case 'D':
                return 500;
            case 'M':
                return 1000;
        }
        return 0;
    }
    int romanToInt(string s) {
        int i, value = 0;
        for (i=0; i<s.length(); i++){
            int cur = val(s[i]), next = 0;
            if (i<s.length()-1){
                next = val(s[i+1]);
                if(cur<next){
                    value -= cur;
                    continue;
                }
            }
            value += cur;
        }
        return value;
    }
};