class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        unordered_map<int,int> m;
        int high=0;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
            high=max(nums[i],high);
        }
        vector<int> dp(high+1);
        dp[0]=0;
        dp[1]=m[1];
        for(int i=2;i<=high;i++){
            dp[i]=max(dp[i-2]+m[i]*i,dp[i-1]);
        }
        return dp[high];
    }
};