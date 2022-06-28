class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int ans=0,start=0,end=nums.size()-1;
        while(start<end){
            int mid=(start+end)/2;
            if(nums[mid]>nums[mid+1]){
                end = mid;
                ans=mid;
            }
            else{
                ans=mid+1;
                start=mid+1;
            }
        }
        return start;
    }
};