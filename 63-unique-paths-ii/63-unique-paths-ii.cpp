class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& grid) {
        int m=grid.size(), n=grid[0].size();
        int dp[m][n];
        memset(dp,0,sizeof(dp));
        for(int i=1;i<m;i++){
            if(grid[i][0]==1)
                break;
            else
                dp[i][0]=1;
    }
        for(int i=1;i<n;i++){
            if(grid[0][i]==1)
                break;
            else
                dp[0][i]=1;
    }
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(grid[i][j]==1)
                    dp[i][j]=0;
                else
                    dp[i][j]=dp[i-1][j]+dp[i][j-1];
            }
        }
        if(grid[0][0]==1)
            return 0;
        if(m==1 && n==1)
            return 1;
        return dp[m-1][n-1];
    }
};