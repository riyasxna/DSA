// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
  bool dfs(int i,vector<int> adj[],vector<int>& visited,vector<int>& dfsvisited){
      visited[i]=1;
      dfsvisited[i]=1;
      for(auto u:adj[i]){
          if(!visited[u]){
              if(dfs(u,adj,visited,dfsvisited))
              return true;
          }
          else{
              if(dfsvisited[u]==1)
              return true;
          }
      }
      dfsvisited[i]=0;
      return false;
  }
  
    // Function to detect cycle in a directed graph.
    bool isCyclic(int n, vector<int> adj[]) {
        // code here
        vector<int> visited(n,0),dfsvisited(n,0);
        for(int i=0;i<n;i++){
            if(!visited[i]){
                if(dfs(i,adj,visited,dfsvisited))
                return true;
            }
        }
        return false;
    }
};

// { Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}
  // } Driver Code Ends