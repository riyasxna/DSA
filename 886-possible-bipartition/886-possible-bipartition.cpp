class Solution {
public:
    void dfs(int i,bool& ans,vector<int> adj[],vector<int>& color){
        if(!color[i]){
                color[i]=1;
            }
        for(auto u:adj[i]){
            if(!color[u]){
                color[u]=-color[i];
                dfs(u,ans,adj,color);
            }
            if(color[u]==color[i]){
                ans=false;
                return;
            }
        }
    }
    
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        vector<int> adj[n+1];
        for(int i=0;i<dislikes.size();i++){
            adj[dislikes[i][0]].push_back(dislikes[i][1]);
            adj[dislikes[i][1]].push_back(dislikes[i][0]);
        }
        vector<int> color(n+1,0);
        bool ans=true;
        for(int i=1;i<=n;i++){
            if(color[i]==0)
                dfs(i,ans,adj,color);
        }
        if(ans==true)
            return true;
        return false;
    }
};