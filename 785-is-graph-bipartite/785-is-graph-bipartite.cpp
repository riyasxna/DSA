class Solution {
public:
    void dfs(int i,bool& ans,vector<vector<int>>& graph,vector<int>& color){
        if(!color[i]){
                color[i]=1;
            }
        for(auto u:graph[i]){
            if(!color[u]){
                color[u]=-color[i];
                dfs(u,ans,graph,color);
            }
            if(color[u]==color[i]){
                ans=false;
                return;
            }
        }
    }
    
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        bool ans=true;
        vector<int> color(n,0);
        for(int i=0;i<n;i++){
            if(color[i]==0){
                dfs(i,ans,graph,color);
                if(ans==false)
                    return false;
            }
        }
        return true;
    }
};