class Solution {
public:
    void dfs(int s,bool visited[],vector<int> adj[]){
        if(visited[s]==1)
            return;
        visited[s]=1;
        for(auto u:adj[s]){
            dfs(u,visited,adj);
        }
    }
    
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        bool visited[n];
        for(int i=0;i<n;i++){
            visited[i]=0;
        }
        vector<int> adj[n];
        for(int i=0;i<edges.size();i++){
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        dfs(source,visited,adj);
        return visited[destination];
    }
};