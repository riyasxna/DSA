class Solution {
public:
    bool recurse(vector<int>& nums,vector<int>& visited,int start,int sum,int k,int target){
        if(k==1)
            return true;
        if(sum==target)
            return recurse(nums,visited,0,0,k-1,target);
        for(int i=start;i<nums.size();i++){
            if(!visited[i] && sum+nums[i]<=target){
                visited[i]=1;
                if(recurse(nums,visited,i+1,sum+nums[i],k,target))
                    return true;
                visited[i]=0;
            }
        }
        return false;
    }
    
    bool canPartitionKSubsets(vector<int>& nums, int k) {
        int total=0;
        total=accumulate(nums.begin(),nums.end(),total);
        sort(nums.rbegin(),nums.rend());
        if(total%k!=0 || nums[0]>total/k)
            return false;
        vector<int> visited(nums.size(),0);
        return recurse(nums,visited,0,0,k,total/k);
    }
};