class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int sum=nums[0],max1=nums[0];
        for(int i=1;i<n;i++){
            sum=max(nums[i],nums[i]+sum);
            max1=max(max1,sum);
        }
        return max1;
    }
};