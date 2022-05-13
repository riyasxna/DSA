class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n,0);
        dp[0]=1;
        for(int i=0;i<n-1;i++){
            if(dp[i]==1){
                while(nums[i]){
                if((i+nums[i])<n)
                    dp[i+nums[i]]=1;
                nums[i]--;
                }
            }
            if(dp[n-1]==1)
                return true;
        }
        return dp[n-1];
    }
};