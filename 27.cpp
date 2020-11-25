// Remove Element

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i,slow=0;
        for(i=0; i<nums.size(); i++){
            if (nums[i]!=val){
                nums[slow]=nums[i];
                slow++;
            }
        }
        return slow;
    }
};