class Solution {
public:
   set<vector<int>> st;
    void solve(vector<int> &nums, int ind)
    {
        if(ind == nums.size())
        {
            st.insert(nums);
            return;
        }
 
        for(int i = ind;i<nums.size();i++)
        {
            swap(nums[i], nums[ind]);
            solve(nums, ind+1);
            swap(nums[i], nums[ind]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        solve(nums, 0);
        vector<vector<int>> res;
        for(auto i:st)
        {
            res.push_back(i);
        }
        return res;
    }
};