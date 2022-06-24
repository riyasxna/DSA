class Solution {
public:
    void recurse(int sum,int index,int &count,vector<int>& nums, int target){
        if(index==nums.size()){
            if(sum==target)
                count++;
            return;
        }
        recurse(sum+nums[index],index+1,count,nums,target);
        recurse(sum-nums[index],index+1,count,nums,target);
    }
    
    int findTargetSumWays(vector<int>& nums, int target) {
        int sum=0,count=0;
        recurse(sum,0,count,nums,target);
        return count;
    }
};