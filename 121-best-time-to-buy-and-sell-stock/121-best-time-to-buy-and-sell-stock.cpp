class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        if(n==1)
            return 0;
        int dp[n];
        dp[0]=0;
        dp[1]=max(0,prices[1]-prices[0]);
        for(int i=2;i<n;i++){
            dp[i]=max((prices[i]-prices[i-1]), (prices[i]-prices[i-1])+dp[i-1]);
        }
        return *max_element(dp,dp+n);
    }
};