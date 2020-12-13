// Find the difference

class Solution {
public:
    char findTheDifference(string s, string t) {
        int temp = 0;
        for(char i:s){
            temp -= int(i);
        }
        for (char i:t){
            temp += int(i);
        }
        return char(temp);
    }
};