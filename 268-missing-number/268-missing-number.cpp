class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int res=n;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(nums[i]!=i)
                return i;
        }
        return n;
    }
};