class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int ans,m=edges.size();
        int n=m+1;
        vector<int> degree(n+1,0);
        for(int i=0;i<m;i++){
            degree[edges[i][0]]++;
            degree[edges[i][1]]++;
        }
        for(int i=1;i<=n;i++){
            if(degree[i]==n-1)
                ans=i;
        }
        return ans;
    }
};