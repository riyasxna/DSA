class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size(),reach;
        if(n==1)
            return true;
        reach=nums[0];
        for(int i=0;i<n-1;i++){
            if(i<=reach){
                reach=max(reach,i+nums[i]);
                if((i+nums[i])>=n-1){
                    return true;
                }
            }
        }
        return false;
    }
};