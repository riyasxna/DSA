class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i,j=0,count=0;
        for(int a=0;a<nums.size();a++){
            if(nums[a]==0){count++;}
        }
        for(i=0;i<nums.size();i++){
            if(nums[i]!=0){
                nums[j]=nums[i];
                j++;
            }
        }
        while(count>0){
            nums[j]=0;
            count--;
            j++;
        }
        return;
    }
};