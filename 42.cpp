// Trapping Rain water

class Solution {
public:
    int trap(vector<int>& height) {
        int i, m=0, n=height.size(), res=0;
        vector<int> ans(n,0);
        for(i=0; i<n; i++){
            m=max(m,height[i]);
            ans[i]=m;
        }
        m = 0;
        for(i=n-1; i>=0; i--){
            m=max(m,height[i]);
            res+=min(ans[i],m)-height[i];
        }
        return res;
    }
};

// Alternative

class Solution {
public:
    int trap(vector<int>& height) {
        int l=0,r=height.size()-1,lmax=0,rmax=0,ans=0;
        while(l<r){
            if(height[l]<height[r]){
                if(height[l]>lmax) lmax=height[l];
                else ans+=lmax-height[l];
                l++;
            } else {
                if(height[r]>rmax) rmax=height[r];
                else ans+=rmax-height[r];
                r--;
            }
        }
        return ans;
    }
};