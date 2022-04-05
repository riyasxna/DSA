class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        int max1,max2;
        if(nums.size()==1)
            return nums[0];
        if(nums.size()==2)
            return max(nums[0],nums[1]);
        vector<int> dp(n-1);
              dp[0]=nums[0];
              dp[1]= max(nums[0],nums[1]);
              for(int i=2;i<n-1;i++){
                    dp[i]=max((nums[i]+dp[i-2]),dp[i-1]);
                }
              max1=dp[n-2];
        dp.clear();
              dp[0]=nums[1];
              dp[1]= max(nums[1], nums[2]);
              for(int i=2;i<n-1;i++){
                    dp[i]=max((nums[i+1]+dp[i-2]),dp[i-1]);
                }
              max2=dp[n-2];
    
        return max(max1,max2);
    }
};