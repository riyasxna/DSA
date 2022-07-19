class Solution {
public:
    int numSquares(int n) {
        vector<int> dp(n+1,INT_MAX);
        dp[0]=0;
        int i=1;
        while(i*i<=n){
            for(int j=i*i;j<=n;j++){
                dp[j]=min(dp[j],1+dp[j-i*i]);
            }
            i++;
        }
        return dp[n];
    }
};