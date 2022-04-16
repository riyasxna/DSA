class Solution {
public:
    void dfs(int i,vector<vector<int>>& rooms,vector<bool>& visited){
        if(visited[i]==1)
            return;
        visited[i]=1;
        for(auto u:rooms[i]){
            dfs(u,rooms,visited);
        }
    }
    
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size(),count=0;
        vector<bool> visited(n,0);
        dfs(0,rooms,visited);
        for(int i=0;i<n;i++){
            if(visited[i]==1)
                count++;
        }
        if(count==n)
            return true;
        return false;
    }
};