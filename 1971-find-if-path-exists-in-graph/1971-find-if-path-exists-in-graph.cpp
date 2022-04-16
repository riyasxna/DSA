class Solution {
public:
    void dfs(int i,vector<int> adj[],vector<bool>& visited){
        if(visited[i]==1)
            return;
        visited[i]=1;
        for(auto u:adj[i]){
            dfs(u,adj,visited);
        }
    }
    
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        int m=edges.size();
        vector<int> adj[n];
        for(int i=0;i<m;i++){
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        vector<bool> visited(n,0);
        dfs(source,adj,visited);
        return visited[destination];
    }
};