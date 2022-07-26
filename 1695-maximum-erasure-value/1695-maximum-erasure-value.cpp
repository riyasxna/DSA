class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int l=0,r=0,curr=0,ans=0;
        unordered_set<int>s;
        while(r<nums.size()){
            while(s.find(nums[r])!=s.end()){
                curr-=nums[l];         
                s.erase(nums[l]);
                l++;
            }
            s.insert(nums[r]);
            curr+=nums[r];
            ans=max(ans,curr);
            r++;
        }
        return ans;
    }
};