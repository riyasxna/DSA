class Solution {
public:
    int findMin(vector<int>& nums) {
        if(nums[0]<nums[nums.size()-1])
            return nums[0];
        int l=0,h=nums.size()-1,mid;
        while(l<=h){
            mid=(l+h)/2;
            if(nums[mid]<nums[l])
                h=mid;
            else if(nums[mid]>nums[l])
                l=mid;
            else
                break;
        }
        return nums[h];
    }
};