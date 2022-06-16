class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        int res=0,n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=n-1;i>=2;i--){
            int j=i-1,k=i-2;
            if(nums[j]+nums[k]>nums[i])
                res=max(res,nums[j]+nums[k]+nums[i]);
        }
        return res;
    }
};