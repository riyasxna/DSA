class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n=matrix.size(), m= matrix[0].size();
        int dp[n][m];
        for(int i=0;i<m;i++){
            dp[0][i]=matrix[0][i];
        }
        
        for(int i=1;i<n;i++){
            for(int j=0;j<m;j++){
                if(j==0)
                    dp[i][j]=min(dp[i-1][j],dp[i-1][j+1])+matrix[i][j];
                else if(j==m-1)
                    dp[i][j]=min(dp[i-1][j],dp[i-1][j-1])+matrix[i][j];
                else
                    dp[i][j]=min({dp[i-1][j],dp[i-1][j-1],dp[i-1][j+1]})+matrix[i][j];
            }
        }
        int k=dp[n-1][0];
        for(int i=1;i<m;i++){
            k=min(k,dp[n-1][i]);
        }
        return k;
    }
};