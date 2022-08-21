class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int high=1,low=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1])
                high=low+1;
            else if(nums[i]<nums[i-1])
                low=high+1;
        }
        if(high==1 && low==1)
            return 0;
        return max(high,low)-2;
    }
};