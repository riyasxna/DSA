class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int res=0;
        for(int i=nums.size()-1;i>=1;i--){
            int j=i-1;
            while(j>=0){
                if(nums[i]-nums[j]==k){
                    res++;
                    j--;
                }
                else if(nums[i]-nums[j]<k)
                    j--;
                else
                    break;
            }
        }
        return res;
    }
};