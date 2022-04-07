class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int dpmax[n], dpmin[n];
        dpmax[0]=dpmin[0]=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]>0){
                dpmax[i]=max(nums[i],(nums[i]*dpmax[i-1]));
                dpmin[i]=min(nums[i],(nums[i]*dpmin[i-1]));
            }
            else{
                dpmax[i]=max(nums[i],(nums[i]*dpmin[i-1]));
                dpmin[i]=min(nums[i],(nums[i]*dpmax[i-1]));
            }
        }
        return *max_element(dpmax,dpmax+n);
    }
};