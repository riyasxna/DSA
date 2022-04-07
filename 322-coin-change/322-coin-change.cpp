class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<int> dp(amount+1,INT_MAX);
        dp[0]=0;
        sort(coins.begin(),coins.end());
        for(int i=1;i<=amount;i++){
            for(int j=0;j<n;j++){
                if(coins[j]>i)
                    break;
                if(dp[i-coins[j]]!=INT_MAX){
                    dp[i]=min(dp[i],dp[i-coins[j]]+1);
                }
            }
        }
        for(int i=0;i<=amount;i++){
            if(dp[i]==INT_MAX)
                dp[i]=-1;
        }
        return dp[amount];
    }
};