// Peak Index in a Mountain Array

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int l = 0, r = arr.size(), m;
        while(l<r){
            m = (l+r)/2;
            if(arr[m]>arr[m-1] && arr[m]>arr[m+1]) return m;
            if(arr[m]<arr[m-1]){
                r=m;
            } else {
                l=m;
            }
        }
        return l;
    }
};