class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res(2);
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
           auto it=m.find(target-nums[i]);
            if(it==m.end())
                m[nums[i]]=i;
            else{
                res[0]=it->second;
                res[1]=i;
                break;
            }
        }
        return res;
    }
};