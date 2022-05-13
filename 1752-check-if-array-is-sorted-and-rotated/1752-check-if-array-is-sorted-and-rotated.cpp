class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size(),index=0;
        for(int i=1;i<n;i++){
            if(nums[i]<nums[i-1]){
                index=i;
                break;
            }
        }
        if(index==0)
            return true;
        for(int i=index;i<n-1;i++){
            if(nums[i]>nums[i+1])
                return false;
        }
        if(nums[0]<nums[n-1])
            return false;
        return true;
    }
};