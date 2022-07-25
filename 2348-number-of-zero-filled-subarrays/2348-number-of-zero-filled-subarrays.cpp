class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long occ=0,count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                occ++;
                count+=occ;
            }
            else
                occ=0;
        }
        return count;
    }
};