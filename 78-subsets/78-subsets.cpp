class Solution {
public:
    void recurse(int index,int n, vector<int> res,vector<int>& nums,vector<vector<int>>& ans){
	    if(index==n){
		    ans.push_back(res);
		    return;
	    }
	    recurse(index+1,n,res,nums,ans);
	    res.push_back(nums[index]);
	    recurse(index+1,n,res,nums,ans);
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
	    vector<vector<int>> ans;
	    vector<int> res;
	    recurse(0,n,res,nums,ans);
	    return ans;
    }
};