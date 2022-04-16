class Solution {
public:
    void dfs(int i, vector<int> adj[], vector<int>& visited){
        if(visited[i]==1)
            return;
        visited[i]=1;
        for(auto u:adj[i]){
            dfs(u,adj,visited);
        }
    }
    
    int makeConnected(int n, vector<vector<int>>& connections) {
        int m=connections.size(),req=-1;
        vector<int> adj[n];
        for(int i=0;i<m;i++){
            adj[connections[i][0]].push_back(connections[i][1]);
            adj[connections[i][1]].push_back(connections[i][0]);
        }
        vector<int> visited(n,0);
        for(int i=0;i<n;i++){
            if(visited[i]==0){
                dfs(i,adj,visited);
                req++;
            }
        }
        if(m<n-1)
            return -1;
        return req;
    }
};