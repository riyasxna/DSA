class Solution {
public:
    void dfs(int i,vector<int> adj[],bool visited[]){
        if(visited[i]==1)
            return;
        visited[i]=1;
        for(auto u:adj[i]){
            dfs(u,adj,visited);
        }
    }
    
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        int count=0;
        vector<int> adj[n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(isConnected[i][j]==1 && i!=j)
                    adj[i].push_back(j);
            }
        }
        bool visited[n];
        for(int i=0;i<n;i++){
            visited[i]=0;
        }
        for(int i=0;i<n;i++){
            if(visited[i]==0){
                dfs(i,adj,visited);
                count++;
            }
        }
        return count;
    }
};