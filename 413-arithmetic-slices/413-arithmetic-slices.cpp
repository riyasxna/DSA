class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        if(nums.size()<3)
            return 0;
        vector<int> dp(nums.size());
        int count=1,res=0;
        int k=nums[1]-nums[0];
        dp[0]=dp[1]=0;
        for(int i=2;i<nums.size();i++){
            if(nums[i]-nums[i-1]==k){
                dp[i]=dp[i-1]+count;
                count++;
            }
            else{
                k=nums[i]-nums[i-1];
                count=1;
                dp[i]=0;
                res+=dp[i-1];
            }
        }
        return dp[nums.size()-1]+res;
    }
};