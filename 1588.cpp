// Sum of all odd length subarray

class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int ans=0, n = arr.size(), i;
        for(i=0; i<n; i++) 
            ans+=(ceil(((i+1)*(n-i))*0.5)*arr[i]);
        return ans;
    }
};