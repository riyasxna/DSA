class Solution {
public:
    void recurse(int index, vector<int> &nums, vector<vector<int>> &res){
        if(index==nums.size()){
            res.push_back(nums);
        }
        else{
            for(int i=index; i<nums.size();i++){
                swap(nums[index], nums[i]);
                recurse(index+1, nums, res);
                swap(nums[index], nums[i]);
            }
        }
        }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        recurse(0, nums, res);
        return res;
    }
};