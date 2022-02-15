class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n-2;i++){
            int j=i+1, k=n-1;
            while(j<k){
                if(nums[i]+nums[j]+nums[k]==0){
                    res.push_back({nums[i],nums[j],nums[k]});
                    j++,k--;
                    while(j<n && nums[j]==nums[j-1])
                        j++;
                }
                else if(nums[i]+nums[j]+nums[k]<0)
                    j++;
                else
                    k--;
            }
            while(i+1<n && nums[i]==nums[i+1])
                i++;
        }
        return res;
    }
};