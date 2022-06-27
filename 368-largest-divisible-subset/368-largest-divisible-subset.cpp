class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> dp(nums.size(),1),res;
        for(int i=1;i<nums.size();i++){
            for(int j=0;j<i;j++){
                if(nums[i]%nums[j]==0)
                    dp[i]=max(dp[i],dp[j]+1);
            }
        }
        int value=0,index;
        for(int i=0;i<dp.size();i++){
            if(value<dp[i]){
                value=dp[i];
                index=i;
            }
        }
        int m=index;
        for(int i=m;i>=0;i--){
            if(nums[index]%nums[i]==0 && dp[i]==value){
                res.push_back(nums[i]);
                index=i;
                value--;
            }
        }
        return res;
    }
};