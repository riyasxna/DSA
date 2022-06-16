class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        int n=nums.size();
        int l=0,r=n-2,h=n-1,res=0;
        sort(nums.begin(),nums.end());
        while(l<r && h>=2){
            if(nums[l]+nums[r]>nums[h]){
                res+=r-l;
                r--;
            }
            else{
                l++;
            }
            if(l==r){
                l=0;
                h-=1;
                r=h-1;
            }
        }
        return res;
    }
};