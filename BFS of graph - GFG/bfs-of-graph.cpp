// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        bool visited[V]={0};
        int distance[V];
        queue<int> q;
        vector<int> ans;
        q.push(0);
        ans.push_back(0);
        visited[0]=1;
        distance[0]=0;
        while(!q.empty()){
            int s=q.front();
            q.pop();
            for(auto u:adj[s]){
                if(visited[u]==1)
                continue;
                q.push(u);
                ans.push_back(u);
                visited[u]=1;
                distance[u]=distance[s]+1;
            }
        }
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >>

            E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            // 		adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.bfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends