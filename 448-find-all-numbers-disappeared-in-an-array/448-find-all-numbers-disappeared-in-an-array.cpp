class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<int> res,index(n+1,0);
        for(int i=0;i<n;i++){
            index[nums[i]]=1;
        }
        for(int i=1;i<=n;i++){
            if(index[i]==0)
                res.push_back(i);
        }
        return res;
    }
};