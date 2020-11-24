// Remove Duplicates from Sorted Array

// Solution 1 (148ms)
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()>1){
            int i = 1;
            while(i<nums.size()){
                if (nums[i]==nums[i-1]){
                    nums.erase(nums.begin()+i);
                } else {
                    i++;
                }
            }
        }
        return nums.size();
    }
};

// Solution 2 (12 ms)
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size()<2) return nums.size();
        int c = 0;
        int i = 1;
        while(i<nums.size()){
            if (nums[i]!=nums[i-1]) c++;
            nums[c]=nums[i];
            i++;
        }
        return c+1;
    }
};