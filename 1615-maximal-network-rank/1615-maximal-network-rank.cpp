class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
        int m=roads.size(),ans=INT_MIN,sum;
        vector<int> adj[n];
        for(int i=0;i<m;i++){
            adj[roads[i][0]].push_back(roads[i][1]);
            adj[roads[i][1]].push_back(roads[i][0]);
        }
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                sum=adj[i].size()+adj[j].size();
                for(auto u:adj[i]){
                    if(u==j)
                        sum-=1;
                }
                ans=max(ans,sum);
            }
        }
        return ans;
    }
};