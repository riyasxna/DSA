class Solution {
public:
    long long waysToBuyPensPencils(int total, int cost1, int cost2) {
        long long a,b;
        a=min(cost1,cost2);
        b=max(cost1,cost2);
       long long dp[3][total+1];
        for(long long i=0;i<3;i++){
            dp[i][0]=1;
        }
        for(long long i=0;i<=total;i++){
            dp[0][i]=1;
        }
        for(long long j=1;j<=total;j++){
            if(j<a)
                dp[1][j]=dp[1][j-1];
            else
                dp[1][j]=1+dp[1][j-a];
        }
        for(long long j=1;j<=total;j++){
            if(j<b)
                dp[2][j]=dp[1][j];
            else
                dp[2][j]=dp[1][j]+dp[2][j-b];
        }
        return dp[2][total];
    }
};