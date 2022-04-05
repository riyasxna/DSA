class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
            return nums[0];
        for(int i=1;i<n;i++){
            int m=nums.size();
            vector<int> nums2(m-1);
            for(int i=0;i<nums.size()-1;i++){
                nums2[i]=(nums[i]+nums[i+1])%10;
            }
            nums.clear();
            nums=nums2;
        }
        return nums[0];
    }
};