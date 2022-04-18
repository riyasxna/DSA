class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        int m=times.size(),ans=INT_MIN;
        vector<int> distance(n+1,INT_MAX), visited(n+1,0);
        priority_queue<pair<int,int>> p;
        vector<pair<int,int>> adj[n+1];
        for(int i=0;i<m;i++){
            adj[times[i][0]].push_back({times[i][1],times[i][2]});
        }
        p.push({0,k});
        distance[k]=0;
        while(!p.empty()){
            int a=p.top().second;
            p.pop();
            if(visited[a])
                continue;
            visited[a]=1;
            for(auto u:adj[a]){
                int b=u.first;
                int c=u.second;
                if(distance[a]+c<distance[b]){
                    distance[b]=distance[a]+c;
                    p.push({-distance[b],b});
                }
            }
        }
        for(int i=1;i<=n;i++){
            if(distance[i]==INT_MAX)
                return -1;
        }
        for(int i=1;i<=n;i++){
            ans=max(ans,distance[i]);
        }
        return ans;
    }
};