class Solution {
public:
    void recurse(int index,vector<int>& nums,vector<int> list,vector<vector<int>>& ans){
        ans.push_back(list);
        for(int i=index;i<nums.size();i++){
            if(i>index && nums[i]==nums[i-1])
                continue;
            list.push_back(nums[i]);
            recurse(i+1,nums,list,ans);
            list.pop_back();
        }
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> list;
        sort(nums.begin(),nums.end());
        recurse(0,nums,list,ans);
        return ans;
    }
};