class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int total=nums[0],res=nums[0];
        for(int i=1;i<nums.size();i++){
            total=max(total+nums[i],nums[i]);
            res=max(res,total);
        }
        return res;
    }
};