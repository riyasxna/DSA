class Solution {
public:
    void dfs(int i,int& req,vector<int> adj[],vector<int>& visited){
        if(visited[i]==1)
            return;
        visited[abs(i)]=1;
        for(auto u:adj[i]){
            if(visited[abs(u)]==0){
                if(u>0)
                    req++;
            }
            dfs(abs(u),req,adj,visited);
        }   
    }
    
    int minReorder(int n, vector<vector<int>>& connections) {
        vector<int> adj[n];
        vector<int> visited(n,0);
        int m=connections.size(),req=0;
        for(int i=0;i<m;i++){
            adj[connections[i][0]].push_back(connections[i][1]);
            adj[connections[i][1]].push_back(-connections[i][0]);
        }
        dfs(0,req,adj,visited);
        return req;
    }
};