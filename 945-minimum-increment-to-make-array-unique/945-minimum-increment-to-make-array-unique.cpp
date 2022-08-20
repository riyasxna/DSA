class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        int res=0,need=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            res+=max(need-nums[i],0);
            need=max(nums[i],need)+1;
        }
        return res;
    }
};