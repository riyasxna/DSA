class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int high=0,low=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1])
                high=low+1;
            else if(nums[i]<nums[i-1])
                low=high+1;
        }
        if(high==0 || low==0)
            return true;
        return false;
    }
};