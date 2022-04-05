class Solution {
public:
        int minimumTotal(vector<vector<int>>& triangle) {
            if(triangle.size()==1)
                return triangle[0][0];
            int n=triangle.size();
            int tri[n][n], dp[n][n];
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    tri[i][j]=100000;
                    dp[i][j]=100000;
                }
            }
            for(int i=0;i<n;i++){
                for(int j=0;j<triangle[i].size();j++){
                    tri[i][j]=triangle[i][j];
                }
            }
            dp[0][0]=triangle[0][0];
            for(int i=1;i<n;i++){
                dp[i][0]=dp[i-1][0]+tri[i][0];
            }
            for(int i=1;i<n;i++){
                for(int j=1;j<triangle[i].size();j++){
                    dp[i][j]=tri[i][j]+min(dp[i-1][j], dp[i-1][j-1]);
                }
            }
            int minm=dp[n-1][0];
            for(int i=1;i<n;i++){
                minm=min(minm,dp[n-1][i]);
            }
            return minm;
    }
};