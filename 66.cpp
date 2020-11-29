// Plus One

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
     int i=digits.size()-1 ,flag=1;
        while(flag && i+1){
            if(digits[i]==9){
                digits[i]=0;
            } else {
                digits[i] = digits[i]+1;
                flag=0;
            }
            i--;
        }
        if(flag){
            digits.insert(digits.begin(),1);
        }
        return digits;
    }
};