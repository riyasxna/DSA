// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    bool dfs(int i,int parent,vector<int> adj[],vector<int>& visited){
      visited[i]=1;
      for(auto u:adj[i]){
          if(visited[u]==0){
              if(dfs(u,i,adj,visited))
              return true;
          }
          else{
              if(u!=parent)
              return true;
          }
      }
      return false;
  }
  
    // Function to detect cycle in a directed graph.
    bool isCycle(int n, vector<int> adj[]) {
        // code here
        vector<int> visited(n,0);
        for(int i=0;i<n;i++){
            if(visited[i]==0){
                if(dfs(i,-1,adj,visited))
                return true;
                }
            }
        return false;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}  // } Driver Code Ends