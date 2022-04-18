class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int> color(n,0);
        queue<int> q;
        for(int i=0;i<n;i++){
            if(color[i]==0){
        q.push(i);
        color[i]=1;
        while(!q.empty()){
            int s=q.front();
            q.pop();
            for(auto u:graph[s]){
                if(!color[u]){
                    color[u]=-color[s];
                    q.push(u);
            }
                if(color[u]==color[s])
                    return false;
                if(color[u]==(-color[s]))
                    continue;
            }
        }
        }
      }
        return true;
    }
};