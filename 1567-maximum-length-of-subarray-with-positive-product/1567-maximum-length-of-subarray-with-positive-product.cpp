class Solution {
public:
    int getMaxLen(vector<int>& nums) {
        int pos=0,neg=0,flag=0,res=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                pos=neg=flag=0;
                continue;
            }
            if(flag==0){
                if(nums[i]>0){
                    pos++;
                    neg=0;
                }
                else{
                    neg=pos+1;
                    pos=0;
                    flag=1;
                }
            }
            else{
                if(nums[i]>0){
                    pos++;
                    neg++;
                }
                else{
                    pos=neg+1;
                    neg=1;
                    flag=0;
                }
            }
            res=max(res,pos);
        }
        pos=neg=flag=0;
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]==0){
                pos=neg=flag=0;
                continue;
            }
            if(flag==0){
                if(nums[i]>0){
                    pos++;
                    neg=0;
                }
                else{
                    neg=pos+1;
                    pos=0;
                    flag=1;
                }
            }
            else{
                if(nums[i]>0){
                    pos++;
                    neg++;
                }
                else{
                    pos=neg+1;
                    neg=1;
                    flag=0;
                }
            }
            res=max(res,pos);
        }
        return res;
    }
};