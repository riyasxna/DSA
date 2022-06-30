class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<2)
            return 0;
        int res=0,product=1,i=0,j=0;
        for(;j<nums.size();j++){
             product*=nums[j];
             while(product>=k){
                product/=nums[i];
                i++;
            }
            res+=j-i+1;
        }
        return res;
    }
};