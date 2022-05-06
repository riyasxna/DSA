class Solution {
public:
    void recurse(int index,int target,vector<int> &list, vector<vector<int>>& ans,vector<int>& candidates){
        if(target==0){
            ans.push_back(list);
            return;
        }
        for(int i=index;i<candidates.size();i++){
            if(index<i && candidates[i]==candidates[i-1])
                continue;
            if(target<candidates[i])
                break;
            list.push_back(candidates[i]);
            recurse(i+1,target-candidates[i],list,ans,candidates);
            list.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> list;
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> ans;
        recurse(0,target,list,ans,candidates);
        return ans;
    }
};