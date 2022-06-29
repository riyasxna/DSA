class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size(),j=0,res=INT_MAX;
        vector<int> prefix(n);
        prefix[0]=nums[0];
        for(int i=1;i<n;i++){
            prefix[i]=prefix[i-1]+nums[i];
        }
        if(prefix[n-1]<target)
            return 0;
        for(int i=0;i<n;i++){
            if(prefix[i]<target)
                continue;
            else{
                res=min(res,i-j+1);
                while(prefix[i]-prefix[j]>=target){
                    j++;
                    res=min(res,i-j+1);
                }
            }
        }
        if(res==INT_MAX)
            return 0;
        return res;
    }
};