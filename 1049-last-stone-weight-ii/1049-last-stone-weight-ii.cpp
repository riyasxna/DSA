class Solution {
public:
    int lastStoneWeightII(vector<int>& stones) {
        int sum=0,n=stones.size(),res=INT_MAX;
        if(n==1)
            return stones[0];
        for(int i=0;i<n;i++){
            sum+=stones[i];
        }
        int dp[n+1][sum+1];
        for(int i=0;i<=n;i++){
            dp[i][0]=1;
        }
        for(int j=1;j<=sum;j++){
            dp[0][j]=0;
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=sum;j++){
                if(stones[i-1]<=j)
                    dp[i][j]=dp[i-1][j-stones[i-1]] || dp[i-1][j];
                else
                    dp[i][j]=dp[i-1][j];
            }
        }
        for(int j=1;j<=sum/2;j++){
            if(dp[n][j]==1)
                res=min(res,abs(sum-2*j));
        }
        return res;
    }
};