class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)
                count++;
        }
        int index=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                nums[index]=nums[i];
                index++;
            }
        }
        while(count--){
            nums[index]=0;
            index++;
        }
    }
};