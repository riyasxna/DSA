class Solution {
public:
    int p=0;
    void dfs(int i,int j,vector<vector<int>>& grid){
        if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size() || !grid[i][j] || grid[i][j]==-1)
            return;
        grid[i][j]=-1;
        if(i==0)
            p++;
        if(i==grid.size()-1)
            p++;
        if(j==0)
            p++;
        if(j==grid[0].size()-1)
            p++;
        if(i>0)
            grid[i-1][j]==0?p++:p;
        if(i<grid.size()-1)
            grid[i+1][j]==0?p++:p;
        if(j>0)
            grid[i][j-1]==0?p++:p;
        if(j<grid[0].size()-1)
            grid[i][j+1]==0?p++:p;
                
        dfs(i+1,j,grid);

        dfs(i-1,j,grid);
          
        dfs(i,j+1,grid);
        dfs(i,j-1,grid);
    }
    
    int islandPerimeter(vector<vector<int>>& grid) {
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]){
                    dfs(i,j,grid);
                    return p;
                }
            }
        }
      
        return p;
    }
};