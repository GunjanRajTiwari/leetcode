// Jewels and Stones

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int hash[58] = {};
        int count = 0;
        for(char i: jewels) hash[int(i)-int('A')] = 1;
        for (char i: stones){
            if(hash[int(i)-int('A')]==1) count += 1;
        }
        return count;
    }
};