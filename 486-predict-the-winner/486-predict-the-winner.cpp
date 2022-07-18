class Solution {
public:
    bool recurse(int i,int j,int p1,int p2,bool turn,vector<int>& nums){
        if(i>j)
            return p1>=p2;
        if(turn)
            return recurse(i+1,j,p1+nums[i],p2,false,nums) || recurse(i,j-1,p1+nums[j],p2,false,nums);
        return recurse(i+1,j,p1,p2+nums[i],true,nums) && recurse(i,j-1,p1,p2+nums[j],true,nums);
    }
    
    bool PredictTheWinner(vector<int>& nums) {
        return recurse(0,nums.size()-1,0,0,true,nums);
    }
};