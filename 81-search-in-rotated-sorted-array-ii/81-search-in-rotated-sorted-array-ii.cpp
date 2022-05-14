class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int l=0,h=nums.size()-1,mid;
        while(l<=h){
            while(l<h && nums[l]==nums[l+1])l++;
            while(l<h && nums[h]==nums[h-1])h--;
            mid=(l+h)/2;
            if(nums[mid]==target)
                return true;
            if(nums[l]<=nums[mid]){
                if(nums[l]<=target && target<=nums[mid])
                    h=mid-1;
                else
                    l=mid+1;
            }
            else{
                if(nums[mid]<=target && target<=nums[h])
                    l=mid+1;
                else
                    h=mid-1;
            }
        }
        return false;
    }
};