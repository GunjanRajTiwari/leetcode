// Lemonade Change

class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five = 0, ten = 0;
        for (int i:bills){
            switch(i){
                case 5:
                    five++;
                    break;
                case 10:
                    if(five){
                        five--;
                        ten++;
                    } else {
                        return 0;
                    }
                    break;
                case 20:
                    if (five && ten){
                        five--;
                        ten--;
                    } else if (five > 2){
                        five -= 3;
                    } else {
                        return 0;
                    }
            }
        }
        return 1;
    }
};