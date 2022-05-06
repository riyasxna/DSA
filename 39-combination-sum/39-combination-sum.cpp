class Solution {
public:
    void recurse(int index,int n,int target,vector<int> list, vector<vector<int>>& ans,vector<int>& candidates){
        if(target==0){
            ans.push_back(list);
            return;
        }
        if(index==n)
            return;
        recurse(index+1,n,target,list,ans,candidates);
        if(target>=candidates[index]){
            list.push_back(candidates[index]);
            recurse(index,n,target-candidates[index],list,ans,candidates);
        }
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n=candidates.size();
        vector<int> list;
        vector<vector<int>> ans;
        recurse(0,n,target,list,ans,candidates);
        return ans;
    }
};