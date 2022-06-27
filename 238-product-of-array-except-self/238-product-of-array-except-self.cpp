class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size(),right=1;
        vector<int> res(n);
        res[0]=nums[0];
        for(int i=1;i<n;i++){
            res[i]=res[i-1]*nums[i];
        }
        for(int i=n-1;i>=1;i--){
            res[i]=res[i-1]*right;
            right*=nums[i];
        }
        res[0]=right;
        return res;
    }
};