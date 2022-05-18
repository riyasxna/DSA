class Solution {
public:
    void dfs(int i,vector<int> adj[],vector<int>& visited,vector<int>& res){
        if(visited[i]==1)
            return;
        visited[i]=1;
        for(auto u:adj[i]){
            dfs(u,adj,visited,res);
        }
        res.push_back(i);
    }
    
    bool canFinish(int n, vector<vector<int>>& prerequisites) {
        vector<int> adj[n],visited(n,0),res;
        for(int i=0;i<prerequisites.size();i++){
            adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
        }
        for(int i=0;i<n;i++){
            if(visited[i]==0)
                dfs(i,adj,visited,res);
        }
        reverse(res.begin(),res.end());
        for(int i=0;i<prerequisites.size();i++){
            auto a=find(res.begin(),res.end(),prerequisites[i][0]);
            auto b=find(res.begin(),res.end(),prerequisites[i][1]);
            if(a-b<=0)
                return false;
        }
        return true;
    }
};