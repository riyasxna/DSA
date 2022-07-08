class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int sum=nums[0],total1=nums[0],res1=nums[0],total2=nums[0],res2=nums[0];
        for(int i=1;i<nums.size();i++){
            sum+=nums[i];
            total1=max(total1+nums[i],nums[i]);
            res1=max(res1,total1);
            total2=min(total2+nums[i],nums[i]);
            res2=min(res2,total2);
        }
        if(sum==res2)
            return res1;
        return max(res1,sum-res2);
    }
};