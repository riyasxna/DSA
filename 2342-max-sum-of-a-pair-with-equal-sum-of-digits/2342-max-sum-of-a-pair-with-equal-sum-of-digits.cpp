class Solution {
public:
    int maximumSum(vector<int>& nums) {
        unordered_map<int,int> value;
        int res=-1;
        for(int i=0;i<nums.size();i++){
            int temp=0,curr=nums[i];
            while(curr){
                temp+=curr%10;
                curr/=10;
            }
            if(value.find(temp)!=value.end()){
                res=max(res,value[temp]+nums[i]);
                value[temp]=max(nums[i],value[temp]);
            }
            else{
                value[temp]=nums[i];
            }
        }
        return res;
    }
};