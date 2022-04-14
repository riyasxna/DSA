class Solution {
public:
    int twoEggDrop(int n) {
        int dp[3][n+1];
        int m;
        for(int i=0;i<3;i++){
            dp[i][0]=0;
        }
        for(int i=1;i<n+1;i++){
            dp[0][i]=0;
            dp[1][i]=i;
        }
        for(int i=1;i<n+1;i++){
            dp[2][i]=INT_MAX;
            for(int j=1;j<=i;j++){
                m=1+max(dp[1][j-1],dp[2][i-j]);
                dp[2][i]=min(dp[2][i],m);
            }
        }
        return dp[2][n];
    }
};