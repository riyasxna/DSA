class Solution {
public:
    void dfs(int src,int dest, vector<vector<int>> graph, vector<int>& visited, vector<vector<int>>& ans,vector<int> temp){
        visited[src]=1;
        temp.push_back(src);
        if(src==dest){
            ans.push_back(temp);
            return;
        }
        for(auto u:graph[src]){
            dfs(u,dest,graph,visited,ans,temp);
        }
    }
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<vector<int>> ans;
        vector<int> visited(n,0);
        vector<int> temp;
        dfs(0,n-1,graph,visited,ans,temp);
        return ans;
    }
};