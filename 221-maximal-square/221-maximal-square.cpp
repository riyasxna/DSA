class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int m=matrix.size(), n=matrix[0].size();
        int dp[m][n];
        int edge=0;
        for(int i=0;i<m;i++){
            if(matrix[i][0]=='1')
                dp[i][0]=1;
            else
                dp[i][0]=0;
            edge=max(edge,dp[i][0]);
        }
        for(int i=1;i<n;i++){
            if(matrix[0][i]=='1')
                dp[0][i]=1;
            else
                dp[0][i]=0;
            edge=max(edge,dp[0][i]);
        }
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(matrix[i][j]=='1'){
                    dp[i][j]=min({dp[i-1][j-1],dp[i-1][j],dp[i][j-1]})+1;
                }
                else
                    dp[i][j]=0;
                edge=max(edge,dp[i][j]);
            }
        }
        return edge*edge;
    }
};