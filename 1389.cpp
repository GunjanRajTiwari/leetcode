// Create target array in the given order

class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> target(nums.size());
        target.reserve(101);
        int i,j,temp;
        for(i=0; i<index.size(); i++){
            if(index[i]==i)
                target[i]=nums[i];
            else{
                for(j=index[i]; j<=i; j++){
                    temp = target[j];
                    target[j] = nums[i];
                    nums[i] = temp;
                }
            }
        }
        return target;
    }
};