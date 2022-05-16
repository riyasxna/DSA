class Solution {
public:
    int largestCombination(vector<int>& candidates) {
        vector<int> nums(32,0);
        for(int i=0;i<candidates.size();i++){
            int j=31;
            while(candidates[i]>0){
                nums[j]+=candidates[i]%2;
                candidates[i]/=2;
                j--;
            }
        }
        return *max_element(nums.begin(),nums.end());
    }
};