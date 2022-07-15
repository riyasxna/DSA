class Solution {
public:
    void dfs(int i,int j,int& count,vector<vector<int>>& grid){
        if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size() || grid[i][j]==0)
            return;
        grid[i][j]=0;
        count++;
        dfs(i+1,j,count,grid);
        dfs(i-1,j,count,grid);
        dfs(i,j+1,count,grid);
        dfs(i,j-1,count,grid);
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int res=INT_MIN;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                int count=0;
                if(grid[i][j]==1){
                    dfs(i,j,count,grid);
                }
                res=max(res,count);
            }
        }
        return res;
    }
};