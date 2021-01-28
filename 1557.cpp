// Minimum Number of Vertices to Reach All Nodes

class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<int> res, in(n,0);
        res.reserve(n);
        for(auto &e: edges) in[e[1]]++;
        for(auto i=0; i<n; i++)
            if(in[i]==0) res.push_back(i);
        return res;
    }
};