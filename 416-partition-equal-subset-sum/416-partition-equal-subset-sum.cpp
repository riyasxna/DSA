class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int n=accumulate(nums.begin(),nums.end(),0);
        int m=nums.size();
        sort(nums.begin(),nums.end());
        if(n%2!=0)
            return false;
        int sum=n/2;
        int dp[sum+1][m+1];
       for(int i=0;i<=m;i++){
           dp[0][i]=1;
       }
        for(int i=1;i<=sum;i++){
            dp[i][0]=0;
        }
        for(int i=1;i<=sum;i++){
            for(int j=1;j<=m;j++){
                if(nums[j-1]>i)
                    dp[i][j]=dp[i][j-1];
                else
                    dp[i][j]=dp[i][j-1] || dp[i-nums[j-1]][j-1];
            }
        }
        return dp[sum][m];
    }
};