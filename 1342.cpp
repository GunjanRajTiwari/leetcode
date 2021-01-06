// Number of steps to reduce a number to Zero

class Solution {
public:
    int numberOfSteps (int num) {
        return num == 0 ? 0 : log2(num) + bitset<32>(num).count();
    }
};