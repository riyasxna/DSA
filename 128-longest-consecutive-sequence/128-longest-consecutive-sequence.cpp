class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size(), count=1;
        int res=INT_MIN;
        if(nums.empty()){return 0;}
        if(n==1){return 1;}
        sort(nums.begin(), nums.end());
        for(int i=0;i<n-1;i++){
            if(nums[i+1]==nums[i]+1){
                count++;
            }
            if(nums[i+1]!=nums[i] && nums[i+1]!=nums[i]+1){
                count=1;
            }
            res=max(res, count);
        }
        return res;
    }
};