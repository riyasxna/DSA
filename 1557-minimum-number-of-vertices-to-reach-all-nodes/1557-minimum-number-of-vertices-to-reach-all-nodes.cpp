class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        int m=edges.size();
        vector<int> ans;
        vector<int> degree(n,0);
        for(int i=0;i<m;i++){
            degree[edges[i][1]]++;
        }
        for(int i=0;i<n;i++){
            if(degree[i]==0)
                ans.push_back(i);
        }
        return ans;
    }
};