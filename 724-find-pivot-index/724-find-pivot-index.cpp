class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size(),index=-1,rsum=0,lsum=0;
        for(int i=0;i<n;i++){
            lsum+=nums[i];
        }
        for(int i=n-1;i>=0;i--){
            if(i+1<n)
                rsum+=nums[i+1];
            lsum-=nums[i];
            if(lsum==rsum)
                index=i;
        }
        return index;
    }
};