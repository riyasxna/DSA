class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size(),reach=0,jump=0,pos=0;
        for(int i=0;i<n-1;i++){
            reach=max(reach,i+nums[i]);
            if(i==pos){
                jump++;
                pos=reach;
            }
        }
        return jump;
    }
};